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

	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;

		for (int k = 0; k < 16; k += 2) {
			int temp = s[k] - '0';
			temp *= 2;
			if (temp >= 10) {
				temp = 1 + (temp) % 10;
			}
			s[k] = char(temp + '0');
		}
		int S = 0;
		for (int k = 0; k < 16; k++) {
			S += s[k] - '0';
		}
		if (S % 10 == 0) cout << "T" << endl;
		else cout << "F" << endl;
	}
}