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

	int arr[1001];
	int tc;
	cin >> tc;
	while (tc--) {
		fill(arr, arr + 1001, 0);
		int N;
		cin >> N;
		for (int k = 0; k < N; k++) {
			int input;
			cin >> input;
			arr[input]++;
		}
		int MAX = -INF;
		int MAX_index = -1;
		for (int k = 1000; k > 0; k--) {
			if (arr[k] >= MAX) {
				MAX = arr[k];
				MAX_index = k;
			}
		}
		cout << MAX_index << endl;
	}
}