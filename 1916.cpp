#include<queue>
#include<iostream>
#include<vector>
#include<functional>
#include<utility>
#define INF 99999999
using namespace std;

typedef pair<int, int> pii;

vector<pii> adj[1001];
int dis[1001];

int main() {
	int V, E;
	cin >> V >> E;
	for (int k = 0; k < E; k++) {
		int from, to, weight;
		cin >> from >> to >> weight;

		adj[from].push_back(pii(to, weight));
	}
	int st, en;
	cin >> st >> en;


	//
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

	cout << dis[en];

}