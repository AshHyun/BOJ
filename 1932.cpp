#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int tri[501][501];
int dp[501][501];

int main() {
	int n; 
	cin >> n;
	int len = (n * (n + 1)) / 2;
	for (int k = 1; k <= n; k++) {
		for (int a = 1; a <= k; a++) {
			cin >> tri[k][a];
		}
	}
	dp[1][1] = tri[1][1];
	dp[2][1] = tri[1][1] + tri[2][1];
	dp[2][2] = tri[1][1] + tri[2][2];
	for (int k = 3; k <= n; k++) {
		dp[k][1] = dp[k - 1][1] + tri[k][1];
		dp[k][k] = dp[k - 1][k - 1] + tri[k][k];
	}
	for (int k = 3; k <= n; k++) {
		for (int l = 2; l <= k - 1; l++) {
			dp[k][l] = max(dp[k - 1][l - 1], dp[k - 1][l]) + tri[k][l];
		}
	}
	int MAX = 0;
	for (int k = 1; k <= n; k++) {
		MAX = max(dp[n][k], MAX);
	}
	cout << MAX;
}