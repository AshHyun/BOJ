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

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int R, C, ZR, ZC;
	cin >> R >> C >> ZR >> ZC;
	char map[50][50];

	for (int y = 0; y < R; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < C; x++) {
			map[y][x] = s[x];
		}
	}

	for (int y = 0; y < R; y++) {
		for (int zr = 0; zr < ZR; zr++) {
			for (int x = 0; x < C; x++) {
				for (int zc = 0; zc < ZC; zc++) {
					cout << map[y][x];
				}
			}
			puts("");
		}
	}
}