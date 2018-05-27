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

vector<int> v;
int dp[300001];

int cal(int x) {
	if (x < 0) return INF;
	if (x == 0) return 0;

	int& ret = dp[x];
	if (ret != 0) return ret;

	int MIN = INF;
	for (int k = 0; k < v.size(); k++) {
		if (x - v[k] < 0) continue;
		MIN = min(MIN, cal(x - v[k]));
	}
	return ret = MIN + 1;
}
int main() {
	int N;
	cin >> N;

	int k = 1;
	int temp = 0;
	while (temp + (k*(k + 1) / 2) <= N) {
		v.push_back(temp + (k*(k + 1) / 2));
		temp += (k*(k + 1) / 2);
		k++;
	}

	fill(dp, dp + N + 1, INF);
	dp[0] = 0;

	for (int k = 1; k <= N; k++) {
		for (int i = 0; i < v.size(); i++) {
			if (k - v[i] < 0) break;
			dp[k] = min(dp[k], dp[k - v[i]] + 1);
		}
	}
	cout << dp[N];
}