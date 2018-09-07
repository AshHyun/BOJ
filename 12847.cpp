#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);

	for (int k = 0; k < N; k++) {
		cin >> arr[k];
	}
	int st = 0;
	int en = M - 1;
	ll cur = 0;
	for (int k = st; k <= en; k++) {
		cur += arr[k];
	}
	ll MAX = cur;
	while (1) {
		en++;
		if (en == N) break;
		ll delta = arr[en] - arr[st];
		cur += delta;
		MAX = max(MAX, cur);
		st++;
	}
	cout << MAX;
}