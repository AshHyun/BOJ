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

	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		if (s[s.length()/2] == s[s.length()/2 - 1]) cout << "Do-it" << endl;
		else cout << "Do-it-Not" << endl;
	}
}