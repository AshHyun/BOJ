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
		int a = 0, b = 0;
		int N;
		cin >> N;
		char first, second;
		while (N--) {
			cin >> first >> second;
			if (first == second) continue;
			else if (first == 'R' && second == 'S' || first == 'S' && second == 'P' || first == 'P' && second == 'R') a++;
			else b++;
		}
		if (a > b) cout << "Player 1" << endl;
		else if (a < b) cout << "Player 2" << endl;
		else cout << "TIE" << endl;
	}
}