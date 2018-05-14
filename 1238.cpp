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

	int dis[1001];
	priority_queue<pii, vector<pii>, greater<pii>> q;
	fill(dis, dis + 1001, INF);
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
	int V, E, X;
	cin >> V >> E >> X;
	for (int k = 0; k < E; k++) {
		int from, to, cost;
		cin >> from >> to >> cost;

		adj[from].push_back(pii(to, cost));
	}
	int MAX = 0;
	for (int k = 1; k <= V; k++) {
		int time = dijk(k, X) + dijk(X, k);
		MAX = max(MAX, time);
	}
	cout << MAX;
}