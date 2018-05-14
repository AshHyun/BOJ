#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long dp[1000][3];

int main() {
	int n;
	cin >> n;

	vector<vector<int>> arr;
	arr.resize(n);

	for (int k = 0; k < n; k++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[k].push_back(a);
		arr[k].push_back(b);
		arr[k].push_back(c);
	}

	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1];
	dp[0][2] = arr[0][2];

	for (int k = 1; k < n; k++) {
		dp[k][0] = min(dp[k - 1][1] + arr[k][0], dp[k - 1][2] + arr[k][0]);
		dp[k][1] = min(dp[k - 1][0] + arr[k][1], dp[k - 1][2] + arr[k][1]);
		dp[k][2] = min(dp[k - 1][1] + arr[k][2], dp[k - 1][0] + arr[k][2]);
	}

	cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));




}
