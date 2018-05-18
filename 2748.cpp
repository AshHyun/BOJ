#include<iostream>
using namespace std;

long long dp[91];

long long fibo(int n) {
	if (n == 1) return 1;
	if (n == 0) return 0;

	long long& ret = dp[n];
	if (ret != 0) return ret;

	return ret = fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n; 
	cin >> n;
	cout << fibo(n);
}