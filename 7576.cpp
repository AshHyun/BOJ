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

int M, N;
int map[1000][1000];
bool visited[1000][1000];
queue<pii> q;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };


int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	bool allriped = true;

	cin >> M >> N;

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			cin >> map[y][x];
			if (map[y][x] == 1) {
				q.push(pii(x, y));
				visited[y][x] = true;
			}
			if (map[y][x] == 0) allriped = false;
		}
	}
	
	if (allriped) {
		cout << 0;
		return 0;
	}
	int day = 0;
	while (!q.empty()) {
		int size = q.size();
		while (size--) {
			pii cur = q.front();
			q.pop();
			int curx, cury;
			curx = cur.first;
			cury = cur.second;

			for (int k = 0; k < 4; k++) {
				int x = curx + dx[k];
				int y = cury + dy[k];

				if (!(x >= 0 && x < M && y >= 0 && y < N) || visited[y][x]) continue;

				if (map[y][x] == 0) {
					visited[y][x] = true;
					map[y][x] = 1;
					q.push(pii(x, y));
				}
			}
		}
		day++;
	}
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			if (map[y][x] == 0) {
				cout << -1;
				return 0;
			}
		}
	}
	cout << day - 1;
}