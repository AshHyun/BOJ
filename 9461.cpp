#include<iostream>
using namespace std;

typedef long long ll;

ll dp[101];

int main() {
	int tc;
	cin >> tc;

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;

	for (int k = 6; k <= 100; k++) {
		dp[k] = dp[k - 1] + dp[k - 5];
	}

	while (tc--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
}