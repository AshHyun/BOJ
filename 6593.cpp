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

const int dx[6] = { 1, 0, -1, 0, 0, 0 };
const int dy[6] = { 0, 1, 0, -1, 0, 0 };
const int dz[6] = { 0,0,0,0,1,-1 };



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {


		int L, R, C;
		cin >> L >> R >> C;
		if (L == 0 && R == 0 && C == 0) return 0;

		char map[30][30][30];
		int dis[30][30][30];
		t3 start, end;
		bool visited[30][30][30];

		for (int z = 0; z < L; z++) {
			for (int y = 0; y < R; y++) {
				fill(dis[z][y], dis[z][y] + C, 0);
				fill(visited[z][y], visited[z][y] + C, false);
				string s;
				cin >> s;
				for (int x = 0; x < C; x++) {
					map[z][y][x] = s[x];
					if (s[x] == 'S') start = make_tuple(x, y, z);
					if (s[x] == 'E') end = make_tuple(x, y, z);
				}
			}
			string buf;
			getline(cin, buf);
		}

		queue<t3> q;
		q.push(start);
		visited[get<2>(start)][get<1>(start)][get<0>(start)] = true;

		while (!q.empty()) {
			t3 cur = q.front();
			q.pop();

			int curx, cury, curz;
			tie(curx, cury, curz) = cur;

			for (int k = 0; k < 6; k++) {
				int x = curx + dx[k];
				int y = cury + dy[k];
				int z = curz + dz[k];

				if (!(x >= 0 && x < C && y >= 0 && y < R && z >= 0 && z < L)) continue;

				if (!visited[z][y][x] && map[z][y][x] != '#') {

					dis[z][y][x] = dis[curz][cury][curx] + 1;
					q.push(t3(x, y, z));
					visited[z][y][x] = true;
				}
			}
		}
		int x, y, z;
		tie(x, y, z) = end;
		if (dis[z][y][x]) cout << "Escaped in " << dis[z][y][x] << " minute(s)." << endl;
		else cout << "Trapped!" << endl;
	}
}