#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
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


int V, E;
vector<int> adj[101];


int bfs(int v) {
	bool visited[101] = { 0, };
	int dis[101] = { 0, };

	queue<int> q;
	q.push(v);
	visited[v] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int k = 0; k < adj[cur].size(); k++) {
			int now = adj[cur][k];

			if (!visited[now]) {
				q.push(now);
				dis[now] = dis[cur] + 1;
				visited[now] = true;
			}
		}
	}
	int ret = 0;
	for (int k = 1; k <= V; k++) {
		ret += dis[k];
	}
	return ret;
}

int main() {
	cin >> V >> E;
	for (int k = 0; k < E; k++) {
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
		adj[to].push_back(from);
	}
	int mindex = -1;
	int MIN = INF;
	for (int v = 1; v <= V; v++) {
		int cur = bfs(v);
		if (MIN > cur) {
			MIN = cur;
			mindex = v;
		}
	}
	cout << mindex;
}