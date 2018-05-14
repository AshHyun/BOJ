#include<iostream>
#include<algorithm>
using namespace std;
#define mINF -99999999
int dp[100001];
int arr[100001];
int main() {
	int n;
	cin >> n;
	fill(dp, dp + n, mINF);

	for (int k = 0; k < n; k++) {
		cin >> arr[k];
	}
	int MAX = mINF;

	dp[0] = max(mINF, arr[0]);
	MAX = max(MAX, dp[0]);
	for (int k = 1; k < n; k++) {
		dp[k] = max(dp[k - 1] + arr[k], arr[k]);
		MAX = max(MAX, dp[k]);
	}
	cout << MAX;

}