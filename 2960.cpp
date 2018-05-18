#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr[1001];
bool isprime[1001];

int main() {
	int n, k;
	cin >> n >> k;
	for (int k = 2; k <= n; k++) {
		arr[k] = k;
	}
	isprime[2] = true;
	int ctr = 0;
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
			ctr++;
			if (ctr == k) {
				cout << cur;
				return 0;
			}
			cur += delta;
		}
		while (arr[st] == -1) st++;
		isprime[st] = true;
	}
}