#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001];
int p[1001];

int main() {
	int n;
	cin >> n; 
	for (int k = 1; k <= n; k++) {
		cin >> p[k];
	}
	//init
	for (int k = 1; k <= n; k++) {
		dp[n - k] = p[k];
	}
	for (int k = n; k >= 0; k--) {
		if (dp[k]) {
			for (int j = 1; j <= k; j++) {
				dp[k - j] = max(dp[k - j], dp[k] + p[j]);
			}
		}
	}
	cout << dp[0];

}