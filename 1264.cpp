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


	unordered_set<int> S;
	S.insert('a');
	S.insert('A');
	S.insert('E');
	S.insert('e');
	S.insert('I');
	S.insert('i');
	S.insert('O');
	S.insert('o');
	S.insert('U');
	S.insert('u');

	string s;
	getline(cin, s);
	while (s != "#") {
		int ctr = 0;
		int len = s.size();
		for (int k = 0; k < len; k++) {
			if (S.find(s[k]) != S.end()) ctr++;
		}
		cout << ctr << endl;
		getline(cin, s);
	}
}