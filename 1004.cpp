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

bool getlocation(int x1, int y1, int x2, int y2, int cx, int cy, int r) {
	bool in1 = ((cx - x1)*(cx - x1) + (cy - y1)*(cy - y1) < r * r);
	bool in2 = ((cx - x2)*(cx - x2) + (cy - y2)*(cy - y2) < r * r);

	if (in1 == in2) return false;
	else if (in1 != in2) return true;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int tc;
	cin >> tc;
	while (tc--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int n;
		cin >> n;
		int ctr = 0;
		for (int k = 0; k < n; k++) {
			int cx, cy, r;
			cin >> cx >> cy >> r;
			if (getlocation(x1, y1, x2, y2, cx, cy, r)) ctr++;
		}
		cout << ctr << endl;
	}
}