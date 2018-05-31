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

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int sumfi, sumse;
	sumfi = a * d + b * c;
	sumse = b * d;

	for (int k = 2; k < min(sumfi, sumse); k++) {
		while (sumfi % k == 0 && sumse % k == 0) {
			sumfi /= k;
			sumse /= k;
		}
	}

	cout << sumfi << " " << sumse;
}