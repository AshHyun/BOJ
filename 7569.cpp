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

int M, N, H;
int map[100][100][100];
bool visited[100][100][100];
queue<t3> q;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int dz[2] = { -1, 1 };

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	bool allriped = true;
	
	cin >> M >> N >> H;
	for (int z = 0; z < H; z++) {
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				cin >> map[z][y][x];
				if (map[z][y][x] == 1) {
					q.push(t3(x, y, z));
					visited[z][y][x] = true;
				}
				if (map[z][y][x] == 0) allriped = false;
			}
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
			t3 cur = q.front();
			q.pop();
			int curx, cury, curz;
			tie(curx, cury, curz) = cur;

			for (int k = 0; k < 4; k++) {
				int x = curx + dx[k];
				int y = cury + dy[k];
				int z = curz;

				if (!(x >= 0 && x < M && y >= 0 && y < N) || visited[z][y][x]) continue;

				if (map[z][y][x] == 0) {
					visited[z][y][x] = true;
					map[z][y][x] = 1;
					q.push(t3(x, y, z));
				}
			}
			for (int k = 0; k < 2; k++) {
				int x = curx;
				int y = cury;
				int z = curz + dz[k];

				if (z >= H || z < 0 || visited[z][y][x]) continue;

				if (map[z][y][x] == 0) {
					visited[z][y][x] = true;
					map[z][y][x] = 1;
					q.push(t3(x, y, z));
				}
			}
		}
		day++;
	}
	for (int z = 0; z < H; z++) {
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (map[z][y][x] == 0) {
					cout << -1;
					return 0;
				}
			}
		}
	}
	cout << day - 1;
}