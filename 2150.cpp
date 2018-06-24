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
#include<stack>
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

int V, E;
bool finished[10001];
vector<int> adj[10001];
vector<vector<int>> SCC;
int whichSCC[10001];
stack<int> S;
int dfn[10001];
int ctr = 1;

int dfs(int v) {
	dfn[v] = ctr++;
	int ret = dfn[v];
	S.push(v);

	for (int k = 0; k < adj[v].size(); k++) {
		int to = adj[v][k];
		if (!dfn[to]) ret = min(ret, dfs(to));
		else if (!finished[to]) ret = min(ret, dfn[to]);
	}

	if (ret == dfn[v]) {
		vector<int> curSCC;
		while (1) {
			int cur = S.top();
			S.pop();
			curSCC.push_back(cur);
			finished[cur] = true;
			whichSCC[cur] = SCC.size();
			if (cur == v) break;
		}
		sort(curSCC.begin(), curSCC.end());
		SCC.push_back(curSCC);
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> V >> E;
	for (int k = 0; k < E; k++) {
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
	}
	for (int k = 1; k <= V; k++) if (dfn[k] == 0) dfs(k);
	sort(SCC.begin(), SCC.end());

	cout << SCC.size() << '\n';
	for (auto& curSCC : SCC) {
		for (auto& cur : curSCC) {
			cout << cur << " ";
		}
		cout << "-1\n";
	}
}