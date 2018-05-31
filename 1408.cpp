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

	string cur, st;
	cin >> cur >> st;
	int curh, curm, curs, sth, stm, sts;
	curh = stoi(cur.substr(0, 2));
	curm = stoi(cur.substr(3, 2));
	curs = stoi(cur.substr(6, 2));

	sth = stoi(st.substr(0, 2));
	stm = stoi(st.substr(3, 2));
	sts = stoi(st.substr(6, 2));

	int h, m, s;
	h = sth - curh;
	m = stm - curm;
	s = sts - curs;

	int totals = h * 3600 + m * 60 + s;
	if (totals < 0) totals = 60 * 60 * 24 + totals;

	string H = to_string(totals / 3600);
	string M = to_string(totals % 3600 / 60);
	string S = to_string(totals % 3600 % 60);
	
	if (H.size() == 1) H.insert(0, "0");
	if (M.size() == 1) M.insert(0, "0");
	if (S.size() == 1) S.insert(0, "0");

	cout << H << ":" << M << ":" << S;
}