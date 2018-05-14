#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int dp[300][3];

int n;
vector<int> arr;
int main() {

	cin >> n;
	if (n == 1) {
		int a;
		cin >> a;
		cout << a;
		return 0;
	}
	arr.resize(n+1);
	for (int k = 0; k < n; k++) {
		cin >> arr[k+1];
	}
	dp[1][1] = arr[1];
	dp[1][2] = arr[1];
	dp[2][2] = arr[1] + arr[2];
	dp[2][1] = arr[2];

	for (int k = 3; k < n + 1; k++) {
		dp[k][2] = dp[k - 1][1] + arr[k];
		dp[k][1] = max(dp[k - 2][2] + arr[k], dp[k - 2][1] + arr[k]);
	}
	cout << max(dp[n][1], dp[n][2]);
}