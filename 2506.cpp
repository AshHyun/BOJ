#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <iostream>
#include <limits.h>
#include <map>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int IT_MAX = 1 << 20;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;
#define szz(x) (int)(x).size()
#define rep(i, n) for(int i=0;i<n;i++)

int summ(int x) {
	int ret = 0;
	for (int k = 0; k <= x; k++) {
		ret += k;
	}
	return ret;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n, 0);

	for (int k = 0; k < n; k++) {
		cin >> arr[k];
	}

	int score = 0;
	int j = 0;
	int cur = 0;
	while (j < n) {
		bool found = false;
		cur = j;
		int ctr = 0;
		while (arr[cur] == 1) {
			cur++;
			ctr++;
			found = true;
		}
		score += summ(ctr);
		if (found) j = cur;
		else j++;
	}
	cout << score;
}