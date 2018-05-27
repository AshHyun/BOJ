#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <queue>
#include <set>
#include <tuple>
#include <utility>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

int N, M;
vector<int> adj[100000];
bool visited[100000];
int indegree[100000];
queue<int> searching;
vector<int> topo;
int ctr = 0;

void dfs(int v) {
	visited[v] = true;
	for (int k = 0; k < adj[v].size(); k++) {
		if (!visited[adj[v][k]]) dfs(adj[v][k]);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cin >> N >> M;
	
	for (int k = 0; k < M; k++) {
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
		indegree[to]++;
	}

	for (int k = 0; k < N; k++) if (indegree[k] == 0) searching.push(k);
	
	while (!searching.empty()) {
		int cur = searching.front();
		searching.pop();
		topo.push_back(cur);
		for (int k = 0; k < adj[cur].size(); k++) {
			if (--indegree[adj[cur][k]] == 0) searching.push(adj[cur][k]);
		}
	}

	for (int k = 0; k < topo.size(); k++) {
		if (!visited[topo[k]]) {
			dfs(topo[k]);
			ctr++;
		}
	}
	for (int k = 0; k < N; k++) {
		if (!visited[k]) {
			dfs(k);
			ctr++;
		}
	}
	cout << ctr;
}