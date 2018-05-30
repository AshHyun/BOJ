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

const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

vector<int> topo;
int indegree[32001];
bool visited[32001];
vector<int> adj[32001];

int main() {
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;

	for (int k = 0; k < M; k++) {
		int front, back;
		cin >> front >> back;
		adj[front].push_back(back);
		indegree[back]++;
	}
	queue<int> searching;
	for (int k = 1; k <= N; k++) {
		if (indegree[k] == 0) {
			searching.push(k);
			topo.push_back(k);
		}
	}
	while (!searching.empty()) {
		int cur = searching.front();
		searching.pop();

		for (int k = 0; k < adj[cur].size(); k++) {
			if (--indegree[adj[cur][k]] == 0) {
				searching.push(adj[cur][k]);
				topo.push_back(adj[cur][k]);
			}
		}
	}
	for (int k = 0; k < topo.size(); k++) {
		cout << topo[k] << " ";
	}
}