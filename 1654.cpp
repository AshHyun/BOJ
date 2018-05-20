#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
	int K, N;
	ll len[10000], lo = 1, hi = -1;
	cin >> K >> N;

	for (int i = 0; i<K; i++) {
		cin >> len[i];
		hi = max(hi, len[i] + 1);
	}
	while (lo + 1 < hi) {
		ll mid = (lo + hi) / 2, ctr = 0;
		for (int i = 0; i<K; i++) ctr += len[i] / mid;
		if (ctr >= N) lo = mid;
		else hi = mid;
	}
	cout << lo;
}