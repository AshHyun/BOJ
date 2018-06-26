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

int M, N, t;
int map[100][100];
bool visited[100][100];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
vector<int> ans;

int bfs(int a, int b) {
	int area = 1;
	visited[b][a] = true;
	queue<pii> q;
	q.push(pii(a, b));
	while (!q.empty()) {
		pii cur = q.front();
		q.pop();
		int curx = cur.first;
		int cury = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = curx + dx[k];
			int y = cury + dy[k];

			if (!(x >= 0 && x < N && y >= 0 && y < M) || visited[y][x]) continue;
			
			if (!map[y][x]) {
				visited[y][x] = true;
				q.push(pii(x, y));
				area++;
			}
		}
	}
	return area;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> M >> N >> t;
	for (int k = 0; k < t; k++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		for (int y = b; y < d; y++) {
			for (int x = a; x < c; x++) {
				map[y][x] = 1;
			}
		}
	}
	for (int y = 0; y < M; y++) {
		for (int x = 0; x < N; x++) {
			if (!map[y][x] && !visited[y][x]) ans.push_back(bfs(x, y));
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (int k = 0; k < ans.size(); k++) {
		cout << ans[k] << " ";
	}
}