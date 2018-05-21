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

vector<int> prime;
int arr[4000001];

int main() {
	int N;
	cin >> N;

	for (int k = 1; k <= N; k++) {
		arr[k] = k;
	}

	prime.push_back(2);
	int st = 2;
	while (st <= N) {
		int cur = st;
		int delta = st;
		while (cur <= N) {
			if (arr[cur] == -1) {
				cur += delta;
				continue;
			}
			arr[cur] = -1;
			cur += delta;
		}
		while (arr[st] == -1) st++;
		prime.push_back(st);
	}

	int left = 0, right = 0;

	int cursum = prime[0];
	int size = prime.size();
	int ctr = 0;
	while (left < size && right < size) {
		if (cursum == N) ctr++;

		if (cursum < N) {
			if (right + 1 < size) cursum += prime[++right];
			else break;
		}
		else {
			cursum -= prime[left++];
		}
	}
	cout << ctr;
}