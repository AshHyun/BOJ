#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits.h>
#include <map>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int IT_MAX = 1 << 20;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;
#define szz(x) (int)(x).size()
#define rep(i, n) for(int i=0;i<n;i++)

int tc;
int N, K, W;


bool visited[1001];
vector<int> topology;


void dfs(int v, vector<int> adj[]) {
	visited[v] = true;
	for (int k = 0; k < adj[v].size(); k++) {
		if (!visited[adj[v][k]]) dfs(adj[v][k], adj);
	}
	topology.push_back(v);
}

int main() {
	cin >> tc;
	while (tc--) {
		cin >> N >> K;
		topology.clear();
		fill(visited, visited + 1001, false);

		vector<int> adj[1001];
		vector<int> inedge(N + 1, 0);
		queue<int> q;
		vector<int> time(N + 1);
		vector<int> st(N + 1);

		for (int k = 1; k <= N; k++) {
			cin >> time[k];
		}

		for (int k = 0; k < K; k++) {
			int from, to;
			cin >> from >> to;
			adj[from].push_back(to);
			inedge[to]++;
		}

		cin >> W;

		dfs(1, adj);
		reverse(topology.begin(), topology.end());

		for (int k = 1; k <= N; k++) {
			if (inedge[k] == 0) q.push(k);
		}

		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			if (cur == W) break;
			for (int k = 0; k < (int)adj[cur].size(); k++) {
				st[adj[cur][k]] = max(st[adj[cur][k]], st[cur] + time[cur]);
				if (--inedge[adj[cur][k]] == 0) q.push(adj[cur][k]);
			}
		}
		cout << st[W] + time[W] << endl;
	}
}