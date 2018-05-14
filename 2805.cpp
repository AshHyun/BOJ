#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
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

vector<int> arr;


int sub(int x, int y) {
	return x - y > 0 ? x - y : 0;
}

ll sum(int x) {
	ll sum = 0;
	rep(i, szz(arr)) {
		sum += sub(arr[i], x);
	}
	return sum;
}

int main() {
	int n, m;
	cin >> n >> m;

	int MIN = 0;
	int MAX = INF;

	rep(i, n) {
		int input;
		cin >> input;
		arr.push_back(input);
		MIN = min(MIN, input);
		MAX = max(MAX, input);
	}
	int left = MIN;
	int right = MAX;
	int mid;
	while (left < right) {
		mid = (left + right) / 2;
		if (sum(mid) > m) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	while (sum(mid) >= m) mid++;
	cout << mid - 1;
}