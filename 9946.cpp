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

int alpha1[26];
int alpha2[26];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int ctr = 1;
	while (ctr) {
		bool dif = false;
		fill(alpha1, alpha1 + 26, 0);
		fill(alpha2, alpha2 + 26, 0);
		string s1, s2;
		cin >> s1 >> s2;
		if (s1 == "END" && s2 == "END") return 0;
		for (int k = 0; k < s1.length(); k++) {
			alpha1[s1[k] - 'a']++;
		}
		for (int k = 0; k < s2.length(); k++) {
			alpha2[s2[k] - 'a']++;
		}
		for (int k = 0; k < 26; k++) {
			if (alpha1[k] != alpha2[k]) dif = true;
		}
		if (dif) cout << "Case " << ctr << ": " << "different" << endl;
		else cout << "Case " << ctr << ": " << "same" << endl;
		ctr++;
	}
}