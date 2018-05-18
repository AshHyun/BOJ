#include<iostream>
using namespace std;

int dp[46][2];


int main() {
	int n;
	cin >> n;
	dp[0][0] = 1;
	dp[1][0] = 0;
	dp[1][1] = 1;

	for (int k = 2; k <= n; k++) {
		dp[k][0] = dp[k - 1][1];
		dp[k][1] = dp[k - 1][0] + dp[k - 1][1];
	}

	cout << dp[n][0] << " " << dp[n][1];
}