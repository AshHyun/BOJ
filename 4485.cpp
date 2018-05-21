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
#include <unordered_set>
#include <vector>
using namespace std;


typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <int, pii> p;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;
const int dx[4] = { 0,1,0,-1 };
const int dy[4] = { 1, 0, -1, 0 };

int main() {
	int ctr = 0;
	while (++ctr) {
		int N;
		cin >> N;
		if (N == 0) return 0;

		int map[125][125];
		bool visited[125][125];
		
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < N; x++) {
				cin >> map[y][x];
			}
		}
		int dis[125][125];
		for (int k = 0; k < N; k++) {
			fill(dis[k], dis[k] + N, INF);
			fill(visited[k], visited[k] + N, false);
		}
		priority_queue<p, vector<p>, greater<p>> pq;
		dis[0][0] = map[0][0];
		pq.push(p(map[0][0], pii(0, 0)));
		while (!pq.empty()) {
			p cur = pq.top();
			pq.pop();

			int curdist = cur.first;
			int curx = cur.second.first;
			int cury = cur.second.second;

			if (visited[cury][curx]) continue;

			visited[cury][curx] = true;

			for (int k = 0; k < 4; k++) {
				int x = curx + dx[k];
				int y = cury + dy[k];

				if (!(x >= 0 && x < N && y >= 0 && y < N)) continue;

				if (dis[y][x] > curdist + map[y][x]) {
					dis[y][x] = curdist + map[y][x];
					pq.push(p(dis[y][x], pii(x, y)));
				}
			}
		}
		cout << "Problem " << ctr << ": " << dis[N - 1][N - 1] << endl;
	}
}

