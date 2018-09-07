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

int c[402][402];
int f[402][402];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<vector<int>> adj(N + M + 2);
	int source = 0;
	int sink = N + M + 1;
	int flow = 0;

	for (int k = 1; k <= N; k++) {
		adj[source].push_back(k);
		c[source][k] = 1;
	}
	for (int k = N + 1; k <= N + M; k++) {
		adj[k].push_back(sink);
		c[k][sink] = 1;
	}
	for (int k = 1; k <= N; k++) {
		int num;
		cin >> num;
		while (num--) {
			int to;
			cin >> to;
			adj[k].push_back(to+N);
			adj[to + N].push_back(k);
			c[k][to + N] = 1;
		}
	}
	while (1) {
		vector<int> prev(N + M + 2, -1);
		queue<int> q;
		q.push(source);
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			
			for (int k = 0; k < adj[cur].size(); k++) {
				int to = adj[cur][k];
				if (prev[to] == -1 && c[cur][to] - f[cur][to] > 0) {
					prev[to] = cur;
					q.push(to);
					if (to == sink) break;
				}
			}
		}
		if (prev[sink] == -1) break;

		for (int v = sink; v != source; v = prev[v]) {
			f[prev[v]][v] += 1;
			f[v][prev[v]] -= 1;
		}
		flow += 1;
	}
	cout << flow;
}