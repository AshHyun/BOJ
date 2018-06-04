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

int map[300][300];
bool visited[300][300];
int queried[300][300];
int N, M;
const int dx[4] = { 1,-1,0,0 };
const int dy[4] = { 0,0,1,-1 };

void glacier(int curx_, int cury_) {
	visited[cury_][curx_] = true;
	queue<pii> q;
	q.push(pii(curx_, cury_));

	while (!q.empty()) {
		pii cur = q.front();
		q.pop();

		int curx = cur.first;
		int cury = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = curx + dx[k];
			int y = cury + dy[k];

			if (visited[y][x] || !(x >= 0 && x < M && y >= 0 && y < N)) continue;

			if (map[y][x] > 0) {
				q.push(pii(x, y));
				visited[y][x] = true;
			}
		}
	}
}

void bfs(int curx_, int cury_) {
	visited[cury_][curx_] = true;
	queue<pii> q;
	q.push(pii(curx_, cury_));

	while (!q.empty()) {
		pii cur = q.front();
		q.pop();

		int curx = cur.first;
		int cury = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = curx + dx[k];
			int y = cury + dy[k];

			if (visited[y][x] || !(x >= 0 && x < M && y >= 0 && y < N)) continue;

			if (map[y][x] > 0) queried[y][x]++;
			else {
				q.push(pii(x, y));
				visited[y][x] = true;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			cin >> map[y][x];
		}
	}

	int chunk = 0;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			if (map[y][x] != 0 && !visited[y][x]) {
				glacier(x, y);
				chunk++;
			}
		}
	}
	bool seperated;
	if (chunk > 1) {
		cout << 0;
		return 0;
	}
	else seperated = false;
	
	int year = 0;
	while (!seperated) {
		year++;
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (!visited[y][x] && map[y][x] == 0) bfs(x, y);
			}
		}
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (queried[y][x]) map[y][x] = max(0, map[y][x] - queried[y][x]);
			}
		}
		int chunk = 0;
		for (int y = 0; y < N; y++) {
			fill(visited[y], visited[y] + M, false);
		}
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (!visited[y][x] && map[y][x] > 0) {
					glacier(x, y);
					chunk++;
				}
			}
		}
		if (chunk > 1) seperated = true;
		if (chunk == 0) {
			cout << 0;
			return 0;
		}
		for (int y = 0; y < N; y++) {
			fill(visited[y], visited[y] + M, false);
			fill(queried[y], queried[y] + M, 0);
		}
	}
	cout << year - 1;
}

