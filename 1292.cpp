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

vector<int> arr;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;
	
	int i = 0, j = 0;
	while (arr.size() <= 1000) {
		i++;
		j = 0;
		while (j < i) {
			arr.push_back(i);
			j++;
		}
	}

	int S = 0;
	for (int k = A - 1; k < B; k++) {
		S += arr[k];
	}
	cout << S;
}