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
		int N;
		cin >> N;
		vector<pii> arr;
		int s = 0;
		for (int k = 1; k <= N; k++) {
			int input;
			cin >> input;
			arr.push_back(pii(input, k));
			s += input;
		}
		sort(arr.begin(), arr.end());
		if (arr[arr.size() - 1].first == arr[arr.size() - 2].first) {
			cout << "no winner" << endl;
			continue;
		}
		if (s/2 < arr[arr.size() - 1].first) {
			cout << "majority winner " << arr[arr.size() - 1].second << endl;
		}
		else {
			cout << "minority winner " << arr[arr.size() - 1].second << endl;
		}

	}
}