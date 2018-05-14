#include<iostream>
#include<algorithm>
using namespace std;

int dp[11];

int main() {

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int k = 4; k <= 10; k++) {
		dp[k] = dp[k - 1] + dp[k - 2] + dp[k - 3];
	}
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;

		cout << dp[n] << endl;
	}
}