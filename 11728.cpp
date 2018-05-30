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
	int A[1000000];
	int B[1000000];
	vector<int> res;

	for (int k = 0; k < N; k++) cin >> A[k];
	for (int k = 0; k < M; k++) cin >> B[k];

	int it1 = 0;
	int it2 = 0;

	while (it1 < N && it2 < M) {
		if (A[it1] <= B[it2]) res.push_back(A[it1++]);
		else res.push_back(B[it2++]);
	}
	while(it1 < N) res.push_back(A[it1++]);
	while(it2 < M)res.push_back(B[it2++]);

	for (int k = 0; k < N + M; k++) cout << res[k] << " ";
}