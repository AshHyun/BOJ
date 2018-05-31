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

class stud {
public:
	stud(string name_, int k_, int e_, int m_) {
		name = name_;
		k = k_;
		e = e_;
		m = m_;
	}
	string name;
	int k, e, m;
};

bool comp(stud A, stud B) {
	if (A.k != B.k) return A.k > B.k;
	else if (A.e != B.e) return A.e < B.e;
	else if (A.m != B.m) return A.m > B.m;
	else return A.name < B.name;
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<stud> v;
	for (int k = 0; k < N; k++) {
		string s;
		int K, e, m;
		cin >> s >> K >> e >> m;
		v.push_back(stud(s, K, e, m));
	}
	sort(v.begin(), v.end(), comp);
	for (int k = 0; k < v.size(); k++) {
		cout << v[k].name << "\n";
	}
}