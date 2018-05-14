#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits.h>
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


char map[51][51];
bool visited[51][51];
int ctr[51][51];
int m, n;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
void visit(int x, int y) {
	visited[y][x] = true;
}

void bfs(pii p) {
	queue<pii> q;
	q.push(p);
	visit(p.first, p.second);

	while (!q.empty()) {
		pii cur = q.front();
		q.pop();
		int copyx = cur.first;
		int copyy = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = copyx + dx[k];
			int y = copyy + dy[k];

			if (!(x >= 0 && x <= n && y >= 0 && y <= m)) continue;

			if (!visited[y][x] && map[y][x] == 'L') {
				ctr[y][x] = ctr[copyy][copyx] + 1;
				q.push(mp(x, y));
				visit(x, y);
			}
		}
	}
}

void init() {
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			ctr[y][x] = 0;
			visited[y][x] = 0;
		}
	}
}
int main() {
	cin >> m >> n;
	for (int y = 0; y < m; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < n; x++) {
			map[y][x] = s[x];
		}
	}

	int maxval = 0;
	for (int y = 0; y < m; y++) {
		for (int x = 0; x < n; x++) {
			if (map[y][x] == 'W') continue;

			//cout << y << " " << x << " ";
			
			init();
			bfs(pii(x, y));
			for (int b = 0; b < m; b++) {
				for (int a = 0; a < n; a++) {
					//if(y == 3 && x == 0) cout << ctr[b][a] << " ";
					maxval = max(maxval, ctr[b][a]);
				}
				//if (y == 3 && x == 0) cout << endl;
			}
			//cout << maxval << endl;
		}
	}
	cout << maxval;
}