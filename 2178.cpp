#include<iostream>
using namespace std;

long long dp[91][2];

int main() {
	dp[1][0] = 0;
	dp[1][1] = 1;

	int n;
	cin >> n;

	for (int k = 2; k <= n; k++) {
		dp[k][1] = dp[k - 1][0];
		dp[k][0] = dp[k - 1][1] + dp[k - 1][0];
	}

	cout << dp[n][0] + dp[n][1];




}

