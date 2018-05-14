#include<iostream>
#include<algorithm>
using namespace std;

const int MOD = 15746;
long long dp[1000001];
int N;

long long binary(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	long long& ret = dp[n];
	if (ret != 0) return ret;

	return ret = (binary(n - 1) + binary(n - 2)) % MOD;
}

int main() {
	cin >> N;
	cout << binary(N);
}
