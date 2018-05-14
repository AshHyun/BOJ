#include<iostream>
#include<algorithm>
#include<queue>
#include<functional>
#include<vector>
#define INF 99999999
using namespace std;
typedef pair<int, int> pii;
const int MAX_E = 300001;
const int MAX_V = 20001;
int V, E;

vector<int> dis(MAX_V, INF);
vector<pii> adj[MAX_V];
priority_queue<pii, vector<pii>, greater<pii>> pq;

void dijk(int start) {
	dis[start] = 0;
	pq.push(pii(0, start));

	while (!pq.empty()) {
		pii cur = pq.top();
		pq.pop();

		int cost = cur.first;
		int v = cur.second;
		
		if (cost > dis[v]) continue;

		for (pii k : adj[v]) {
			if (cost + k.second < dis[k.first]) {
				dis[k.first] = cost + k.second;
				pq.push(pii(dis[k.first], k.first));
			}
		}
	}
}

int main() {
	cin >> V >> E;

	int st;
	cin >> st;

	for (int k = 0; k < E; k++) {
		int from, to, weight;
		cin >> from >> to >> weight;
		adj[from].push_back(pii(to, weight));
	}
	dijk(st);

	for (int i = 1; i <= V; i++) {
		if (dis[i] == INF) {
			cout << "INF" << endl; 
			continue;
		}
		cout << dis[i] << endl;
	}
}