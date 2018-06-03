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

	int N, M;
	cin >> N >> M;

	vector<int> arr(N + 1);
	for (int k = 1; k <= N; k++) {
		arr[k] = k;
	}
	for (int k = 0; k < M; k++) {
		int a, b;
		cin >> a >> b;
		int temp;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	for (int k = 1; k <= N; k++) {
		cout << arr[k] << " ";
	}
}