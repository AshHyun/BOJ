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


int main() {
	ios_base::sync_with_stdio(false);
	int N; 
	cin >> N;
	vector<pii> arr;
	for (int k = 0; k < N; k++) {
		int a, b;
		cin >> a >> b;
		arr.push_back(pii(b, a));
	}
	sort(all(arr));
	for (int k = 0; k < N; k++) {
		cout << arr[k].second << " " << arr[k].first << "\n";
	}
}