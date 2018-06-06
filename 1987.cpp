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

int R, C;
char map[20][20];
int MAX = 0;
int ctr = 0;
bool visited[26];

const int dx[4] = { -1, 1, 0,0 };
const int dy[4] = { 0,0,-1,1 };

void backtrack(int x, int y) {
	ctr++;
	MAX = max(MAX, ctr);
	visited[map[y][x] - 'A'] = true;

	for (int k = 0; k < 4; k++) {
		int x_ = x + dx[k];
		int y_ = y + dy[k];

		if (visited[map[y_][x_] - 'A'] || !(x_ >= 0 && x_ < C && y_ >= 0 && y_ < R)) continue;

		backtrack(x_, y_);
	}

	ctr--;
	visited[map[y][x] - 'A'] = false;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> R >> C;
	for (int y = 0; y < R; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < C; x++) {
			map[y][x] = s[x];
		}
	}
	backtrack(0, 0);
	cout << MAX;
}