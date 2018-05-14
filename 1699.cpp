#include<iostream>
#include<algorithm>
using namespace std;
#define INF 99999999

int dp[100001];
int N;

int tosquare(int n) {

	if (n == 1) return 1;
	if (n == 0) return 0;

	if (dp[n] != INF) return dp[n];

	int& ret = dp[n];
	int k = 1;
	while (n - k*k >= 0) {
		ret = min(ret, tosquare(n - k*k) + 1);
		k++;
	}
	return ret;
}

int main() {
	cin >> N;
	fill(dp, dp + 100001, INF);
	cout << tosquare(N);
}

