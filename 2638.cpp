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
int map[100][100];
bool visited[100][100];
int queried[100][100];
int ctr = 0;
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = { 1, -1, 0, 0 };

bool still_cheese() {
	bool ret = false;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			if (map[y][x] == 1) ret = true;
			if (queried[y][x] >= 2) {
				map[y][x] = 0;
			}
		}
	}
	for (int y = 0; y < N; y++) {
		fill(queried[y], queried[y] + M, 0);
		fill(visited[y], visited[y] + M, false);
	}
	if (ret) {
		ctr++;
		return ret;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			cin >> map[y][x];
		}
	}
	while (still_cheese()) {
		queue<pii> q;
		q.push(pii(0, 0));
		visited[0][0] = true;
		while (!q.empty()) {
			pii cur = q.front();
			q.pop();

			int curx = cur.first;
			int cury = cur.second;

			for (int k = 0; k < 4; k++) {
				int x = curx + dx[k];
				int y = cury + dy[k];

				if (visited[y][x] || !(x >= 0 && x < M && y >= 0 && y < N)) continue;

				if (map[y][x] == 1) queried[y][x]++;
				else {
					q.push(pii(x, y));
					visited[y][x] = true;
				}
			}
		}
	}
	cout << ctr - 1;
}