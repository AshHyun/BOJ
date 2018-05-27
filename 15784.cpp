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

int N, a, b;
int Map[1001][1001];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> a >> b;

	for (int y = 1; y <= N; y++) {
		for (int x = 1; x <= N; x++) {
			cin >> Map[y][x];
		}
	}
	int pivot = Map[a][b];

	for (int x = 1; x <= N; x++) {
		if (Map[a][x] > pivot) {
			cout << "ANGRY";
			return 0;
		}
	}
	for (int y= 1; y <= N; y++) {
		if (Map[y][b] > pivot) {
			cout << "ANGRY";
			return 0;
		}
	}
	cout << "HAPPY";
}