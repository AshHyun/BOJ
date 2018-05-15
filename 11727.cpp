#include<iostream>
using namespace std;

long long dp[1000];

int main() {
	fill(dp, dp + 1000, 1);
	dp[1] = 1;
	dp[2] = 3;

	int n;
	cin >> n;

	for (int k = 3; k <= n; k++) {
		dp[k] = (dp[k - 1] + dp[k - 2] * 2) % 10007;
	}
	cout << dp[n] % 10007;
}