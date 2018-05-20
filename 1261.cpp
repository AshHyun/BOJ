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
typedef pair<int, pii> p;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

int map[100][100];
int dis[100][100];
bool visited[100][100];

const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

int main() {
	int M, N;
	cin >> M >> N;
	for (int y = 0; y < N; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < M; x++) {
			map[y][x] = s[x] - '0';
		}
	}
	for (int k = 0; k < N; k++) fill(dis[k], dis[k] + M, INF);
	dis[0][0] = 0;
	
	priority_queue<p, vector<p>, greater<p>> pq;
	pq.push(p(0, pii(0,0)));


	while (!pq.empty()) {
		p cur = pq.top();
		pq.pop();

		int dist = cur.first;
		int curx = cur.second.first;
		int cury = cur.second.second;


		if (visited[cury][curx]) continue;

		visited[cury][curx] = true;

		for (int k = 0; k < 4; k++) {
			int x = curx + dx[k];
			int y = cury + dy[k];

			if (!(x >= 0 && x < M && y >= 0 && y < N)) continue;

			if (map[y][x] == 1) {
				if (dist + 1 < dis[y][x]) {
					dis[y][x] = dist + 1;
					pq.push(p(dis[y][x], pii(x, y)));
				}
			}
			else {
				if (dist < dis[y][x]) {
					dis[y][x] = dist;
					pq.push(p(dis[y][x], pii(x, y)));
				}
			}
		}
	}
	cout << dis[N - 1][M - 1];
}