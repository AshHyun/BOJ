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

bool occupied[15];
bool map[15][15];
int ctr = 0;
int N;
int result = 0;

void backtrack(int x, int y) {
	occupied[x] = true;
	map[y][x] = true;
	ctr++;

	bool isvalid = true;
	for (int k = 0; k < N; k++) {
		if (k != x && map[y][k]) {
			isvalid = false;
			break;
		}
		if (k != y && map[k][x]) {
			isvalid = false;
			break;
		}

		if (k == 0) continue;

		if (map[y + k][x + k] && (x + k >= 0 && x + k < N && y + k >= 0 && y + k < N)) {
			isvalid = false;
			break;
		}
		if (map[y - k][x - k] && (x - k >= 0 && x - k < N && y - k >= 0 && y - k < N)) {
			isvalid = false;
			break;
		}
		if (map[y + k][x - k] && (x - k >= 0 && x - k < N && y + k >= 0 && y + k < N)) {
			isvalid = false;
			break;
		}
		if (map[y - k][x + k] && (x + k >= 0 && x + k < N && y - k >= 0 && y - k < N)) {
			isvalid = false;
			break;
		}
	}
	if (isvalid) {
		if (ctr == N) {
			result++;
			ctr--;
			map[y][x] = false;
			occupied[x] = false;
			return;
		}
		for (int k = 0; k < N; k++) {
			if(!occupied[k]) 
				backtrack(k, y + 1);
		}
	}
	ctr--;
	map[y][x] = false;
	occupied[x] = false;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	for (int k = 0; k < N; k++) {
		backtrack(k, 0);
	}
	cout << result;
}