#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
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
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		int a1, a2, a3;
		cin >> a1 >> a2 >> a3;
		if (a1 == 0 && a2 == 0 && a3 == 0) break;

		if (a2 - a1 == a3 - a2) cout << "AP " << 2*a3 - a2 << endl;
		else cout << "GP " << a3 * a3 / a2 << endl;
	}
}