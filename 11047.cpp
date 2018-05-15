#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> coin;

int main() {
	int n, k;
	cin >> n >> k;
	coin.resize(n);
	for (int k = 0; k < n; k++) {
		cin >> coin[k];
	}
	int cur = n - 1;

	int ctr = 0;
	while (k > 0) {
		while (coin[cur] <= k) {
			k -= coin[cur];
			ctr++;
		}
		cur--;
	}
	cout << ctr;


}