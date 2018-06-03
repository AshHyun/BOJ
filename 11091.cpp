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

bool alpha[26];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int tc;
	cin >> tc;
	cin.ignore();
	while (tc--) {
		fill(alpha, alpha + 26, 0);
		string s;
		getline(cin, s);
		for (int k = 0; k < s.size(); k++) {
			if (isalpha(s[k])) {
				alpha[tolower(s[k]) - 'a'] = true;
			}
		}
		queue<char> missing;
		for (int k = 0; k < 26; k++) {
			if (!alpha[k]) missing.push(char(k + 'a'));
		}
		if (missing.size() == 0) cout << "pangram" << endl;
		else {
			cout << "missing ";
			while (!missing.empty()) {
				cout << missing.front();
				missing.pop();
			}
			cout << endl;
		}
	}
}