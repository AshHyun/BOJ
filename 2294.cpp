#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dp[100001];
vector<int> coins;

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 0; i <= k; i++) {
		dp[i] = 100001;
	}

	for (int c = 0; c < n; c++) {
		int x;
		cin >> x;
		coins.push_back(x);
		dp[x] = 1;
	}
	dp[0] = 0;
	sort(coins.begin(), coins.end());
	for (int a = 1; a <= k; a++) {
		for (int b = 0; b < coins.size(); b++) {
			if (a - coins[b] < 0) continue;
			if (dp[a - coins[b]] && dp[a] > dp[a - coins[b]] + 1) dp[a] = dp[a - coins[b]] + 1;
		}
	}
	//for (int a = 0; a <= k; a++) {
	//	cout << dp[a] << " ";
	//}
	//cout << endl;


	if (dp[k] != 100001) cout << dp[k];
	else if (dp[k] == 100001) cout << -1;
}