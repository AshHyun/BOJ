#include<iostream>
using namespace std;

long long dp[101][10];
const int MOD = 1000000000;
int main() {
	int n;
	cin >> n;
	for (int k = 1; k <= 9; k++) {
		dp[1][k] = 1;
	}
	dp[1][0] = 0;
	for (int k = 2; k <= n; k++) {
		dp[k][0] = dp[k - 1][1] % MOD;
		dp[k][1] = (dp[k - 1][0] + dp[k-1][2]) % MOD;
		for (int a = 1; a <= 8; a++) {
			dp[k][a] = (dp[k - 1][a - 1] + dp[k - 1][a + 1]) % MOD;
		}
		dp[k][9] = dp[k - 1][8] % MOD;
	}
	int ret = 0;
	for (int k = 0; k <= 9; k++) {
		ret += dp[n][k];
		ret %= MOD;
	}
	cout << ret;
}