#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

vector<int> coin;
int *dp[10001];

int main() {
	
	int n, target;
	cin >> n >> target;

	
	for (int k = 0; k < n; k++) {
		int input;
		cin >> input;
		coin.push_back(input);
	}

	for (int k = 0; k <= target + 1; k++) {
		dp[k] = new int[n];
		fill(dp[k], dp[k] + n, 0);
	}


	dp[0][0] = 1;
	for (int k = 0; k <= target; k++) {
		for (int j = 0; j < n; j++) {
			if (dp[k][j]) {
				for (int l = j; l < n; l++) {
					if (k + coin[l] > target) continue;
					dp[k + coin[l]][l] += dp[k][j];
				}
			}
		}
	}
	int summ = 0;
	for (int k = 0; k < n; k++) {
		summ += dp[target][k];
	}
	cout << summ;
}