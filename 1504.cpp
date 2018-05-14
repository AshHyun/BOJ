#include<queue>
#include<iostream>
#include<vector>
#include<functional>
#include<utility>
#define INF 99999999
using namespace std;

typedef pair<int, int> pii;

vector<pii> adj[1001];


int dijk(int st, int en) {

	int dis[8001];
	priority_queue<pii, vector<pii>, greater<pii>> q;
	fill(dis, dis + 801, INF);
	dis[st] = 0;
	q.push(pii(0, st));

	while (!q.empty()) {
		pii cur = q.top();
		q.pop();

		int curv = cur.second;
		int cost = cur.first;

		if (cost > dis[curv]) continue;

		for (pii k : adj[curv]) {
			if (cost + k.second < dis[k.first]) {
				dis[k.first] = cost + k.second;
				q.push(pii(dis[k.first], k.first));
			}
		}
	}
	return dis[en];
}

int main() {
	int V, E;
	cin >> V >> E;
	for (int k = 0; k < E; k++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		adj[to].push_back(pii(from, cost));
		adj[from].push_back(pii(to, cost));
	}
	int a, b;
	cin >> a >> b;

	int MIN = INF;
	MIN = min(MIN, dijk(1, a) + dijk(a, b) + dijk(b, V));
	MIN = min(MIN, dijk(1, b) + dijk(b, a) + dijk(a, V));

	if (MIN >= INF) cout << -1;
	else cout << MIN;
}