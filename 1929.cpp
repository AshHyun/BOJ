#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> m >> n;

	if (m == 1 && n == 1) return 0;

	if (m <= 2) cout << 2 << "\n";

	vector<int> arr(n+1);
	vector<bool> isprime(n+1, false);

	for (int k = 2; k <= n; k++) {
		arr[k] = k;
	}
	isprime[2] = true;
	int st = 2;
	while (st <= n) {
		int cur = st;
		int delta = st;
		while (cur <= n) {
			if (arr[cur] == -1) {
				cur += delta;
				continue;
			}
			arr[cur] = -1;
			cur += delta;
		}
		while (st <= n && arr[st] == -1) st++;
		if (st <= n && st >= m) {
			isprime[st] = true;
			cout << st << "\n";
		}
	}
	/*
	for (int k = m; k <= n; k++) {
		if (isprime[k]) cout << k << "\n";
	}
	*/
}