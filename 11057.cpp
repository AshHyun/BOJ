#include<iostream>
using namespace std;

const int MOD = 10007;
int N;
long long dp[1000][10];

long long inc(int pos, int val) {
	if (pos == N) return 1;
	long long &ret = dp[pos][val];
	if (ret) return ret;

	ret = inc(pos + 1, val);
	if (val < 9) ret = (ret + inc(pos, val + 1)) % MOD;
	return ret;
}

int main() {
	cin >> N;
	cout << inc(0, 0);
}