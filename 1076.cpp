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
typedef pair <string, int> p;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	unordered_map<string, int> map;
	map.insert(p("black", 0));
	map.insert(p("brown", 1));
	map.insert(p("red", 2));
	map.insert(p("orange", 3));
	map.insert(p("yellow", 4));
	map.insert(p("green", 5));
	map.insert(p("blue", 6));
	map.insert(p("violet", 7));
	map.insert(p("grey", 8));
	map.insert(p("white", 9));

	string first, second, third;
	cin >> first >> second >> third;

	cout << (map.find(first)->second * 10 + map.find(second)->second) * (ll)pow(10, map.find(third)->second);
}