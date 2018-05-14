#include<iostream>
using namespace std;

int cache[1000001] = { -1, };



int main() {
	int n;
	cin >> n;
	cache[1] = 0;
	for (int k = 2; k <= n; k++) {
		cache[k] = cache[k - 1] + 1;
		if (k % 2 == 0 && cache[k / 2] + 1 < cache[k]) {
			cache[k] = cache[k / 2] + 1;
		}
		if (k % 3 == 0 && cache[k / 3] + 1 < cache[k]) {
			cache[k] = cache[k / 3] + 1;
		}
	}
	cout << cache[n];
	return 0;
}