#include<iostream>
using namespace std;

int **map;
long long **dp;
int n;

void jump(int x, int y) {
	//cout << "jumping on " << x << " " << y << endl;
	int njump = map[y][x];
	if (njump == 0) return;
	if (x + njump < n) {
		dp[y][x + njump] += dp[y][x];
		jump(x + njump, y);
	}
	if (y + njump < n) {
		dp[y + njump][x] += dp[y][x];
		jump(x, y + njump);
	}
}

int main() {
	
	cin >> n;
	map = new int*[n];
	dp = new long long*[n];

	for (int k = 0; k < n; k++) {
		map[k] = new int[n];
		dp[k] = new long long[n];
	}
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> map[y][x];
			dp[y][x] = 0;
		}
	}
	dp[0][0] = 1;
	//jump(0, 0);
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			if (map[i][j] == 0) continue;
			if (j + map[i][j]<n) {
				dp[i][j + map[i][j]] += dp[i][j];
			}
			if (i + map[i][j]<n) {
				dp[i + map[i][j]][j] += dp[i][j];
			}
		}
	}
	cout << dp[n - 1][n - 1];
}