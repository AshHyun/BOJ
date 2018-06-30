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
#include <stack>
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
vector<vector<int>> adj;
vector<bool> finished;
vector<int> dfn;
stack<int> S;
vector<vector<int>> SCC;
vector<int> SCCn;
vector<int> indegree;
int SCCctr = 0;
int ctr = 0;

int DFS(int v) {
	dfn[v] = ++ctr;
	int ret = dfn[v];
	S.push(v);

	for (int k = 0; k < adj[v].size(); k++) {
		int to = adj[v][k];
		if (dfn[to] == 0) ret = min(ret, DFS(to));
		else if (!finished[to]) ret = min(ret, dfn[to]);
	}
	
	if (ret == dfn[v]) {
		vector<int> curSCC;
		while (1) {
			int cur = S.top();
			S.pop();
			curSCC.push_back(cur);
			finished[cur] = true;
			SCCn[cur] = SCCctr;
			if (cur == v) break;
		}
		SCCctr++;
		SCC.push_back(curSCC);
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cin >> N >> M;
	adj.resize(N);
	dfn.resize(N, 0);
	finished.resize(N, false);
	SCCn.resize(N);

	for (int k = 0; k < M; k++) {
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
	}
	for (int k = 0; k < N; k++) if (dfn[k] == 0) DFS(k);

	indegree.resize(SCCctr, 0);
	for (int from = 0; from < N; from++) {
		for (int to = 0; to < adj[from].size(); to++) {
			if (SCCn[from] != SCCn[adj[from][to]]) indegree[SCCn[adj[from][to]]]++;
		}
	}
	int result = 0;
	for (int k = 0; k < SCCctr; k++) {
		if (indegree[k] == 0) result++;
	}
	cout << result;
}
/*
6 7
0 1
1 2
2 0
1 3
1 4
3 4
5 4
*/