#include<iostream>
#include<algorithm>
using namespace std;

const int MOD = 10007;
int dp[1001];

int main() {

	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;
	for (int k = 3; k <= n; k++) {
		dp[k] = (dp[k - 1] + dp[k - 2]) % MOD;
	}
	cout << dp[n];
}