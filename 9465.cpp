#include<iostream>
#include<algorithm>
using namespace std;

int dp[100001][2];
int arr[100001][2];


int main() {
	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;
		for (int k = 0; k < n; k++) {
			dp[k][0] = 0;
			dp[k][1] = 0;
		}

		for (int k = 0; k < n; k++) {
			cin >> arr[k][0];
		}
		for (int k = 0; k < n; k++) {
			cin >> arr[k][1];
		}
		int MAX = -99999999;
		dp[0][0] = arr[0][0];
		MAX = max(MAX, dp[0][0]);
		dp[0][1] = arr[0][1];
		MAX = max(MAX, dp[0][1]);
		dp[1][0] = arr[1][0] + dp[0][1];
		MAX = max(MAX, dp[1][0]);
		dp[1][1] = arr[1][1] + dp[0][0];
		MAX = max(MAX, dp[1][1]);
		for (int k = 2; k < n; k++) {
			dp[k][0] = max(dp[k - 2][0] + arr[k][0], max(dp[k - 1][1] + arr[k][0], dp[k - 2][1] + arr[k][0]));
			MAX = max(MAX, dp[k][0]);
			dp[k][1] = max(dp[k - 2][1] + arr[k][1], max(dp[k - 1][0] + arr[k][1], dp[k - 2][0] + arr[k][1]));
			MAX = max(MAX, dp[k][1]);
		}


	//	cout << endl;
	//	for (int k = 0; k < n; k++) {
	//		cout << dp[k][0] << " ";
	//	}
	//	cout << endl;
	//	for (int k = 0; k < n; k++) {
	//		cout << dp[k][1] << " ";
	//	}
	//	cout << endl;

		cout << MAX << endl;
	}
}