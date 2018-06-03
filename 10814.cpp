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
typedef tuple<int, int, string> t;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

int main() {
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<t> v;
	for (int k = 0; k < N; k++) {
		int age;
		string s;
		cin >> age >> s;
		v.push_back(t(age, k, s));
	}
	sort(v.begin(), v.end());
	for (int k = 0; k < N; k++) {
		int age;
		string name;
		tie(age, ignore, name) = v[k];
		cout << age << " " << name << "\n";
	}
}