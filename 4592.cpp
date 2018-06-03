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

	vector<int> v;
	int N;
	while (1) {
		v.clear();
		cin >> N;
		if (N == 0) return 0;

		for (int k = 0; k < N; k++) {
			int input;
			cin >> input;
			v.push_back(input);
		}
		v.erase(unique(v.begin(), v.end()), v.end());

		for (int k = 0; k < v.size(); k++) {
			cout << v[k] << " ";
		}
		cout << "$" << endl;
	}
}