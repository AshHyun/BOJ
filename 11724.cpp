#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> adj[1001];
bool visited[1001];
int ctr = 0;

void dfs(int v) {
	visited[v] = true;
	for (int k = 0; k < adj[v].size(); k++) {
		if (!visited[adj[v][k]]) dfs(adj[v][k]);
	}
}

int main() {
	cin >> N >> M;
	for (int k = 0; k < M; k++) {
		int from, to;
		cin >> from >> to;

		adj[from].push_back(to);
		adj[to].push_back(from);
	}
	for (int k = 1; k <= N; k++) {
		if (!visited[k]) {
			dfs(k);
			ctr++;
		}
	}
	cout << ctr;
}