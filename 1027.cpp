#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
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

vector<ll> arr;

int ccw(ll cur, ll maxpos, ll target) {
	ll temp = (maxpos - cur)*(arr[target] - arr[cur]) - (arr[maxpos] - arr[cur])*(target - cur);
	if (temp > 0) return 1;
	if (temp == 0) return 0;
	else return -1;
}

int main() {
	int N;
	cin >> N;
	arr.resize(N);
	for (int k = 0; k < N; k++) {
		cin >> arr[k];
	}
	int MAX = -INF;
	int maxpos = -1;
	for (int k = 0; k < N; k++) {
		int cur = k;
		int leftpos = k;
		int rightpos = k;

		int ctr = 0;
		for (int left = k - 1; left >= 0; left--) {
			if (k - left == 1) {
				ctr++;
				leftpos = left;
				continue;
			}
			if (ccw(cur, leftpos, left) == -1) {
				ctr++;
				leftpos = left;
			}
		}
		
		for (int right = k + 1; right < N; right++) {
			if (right - k == 1) {
				ctr++;
				rightpos = right;
				continue;
			}
			if (ccw(cur, rightpos, right) == 1) {
				ctr++;
				rightpos = right;
			}
		}
		
		if (MAX < ctr) {
			MAX = ctr;
			maxpos = k;
		}
	}
	cout << MAX;
}