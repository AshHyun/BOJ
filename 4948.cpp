#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int MAX = 246913;

int arr[MAX];
bool isprime[MAX];

int main() {
	for (int k = 2; k <= MAX; k++) {
		arr[k] = k;
	}
	isprime[2] = true;
	int st = 2;
	while (st <= MAX) {
		int cur = st;
		int delta = st;
		while (cur <= MAX) {
			if (arr[cur] == -1) {
				cur += delta;
				continue;
			}
			arr[cur] = -1;
			cur += delta;
		}
		while (arr[st] == -1) st++;
		isprime[st] = true;
	}

	int n;
	while (1) {
		int ctr = 0;
		cin >> n;
		if (n == 0) return 0;
		for (int k = n + 1; k <= 2 * n; k++) {
			if (isprime[k]) ctr++;
		}
		cout << ctr << endl;
	}
}