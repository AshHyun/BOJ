#include<iostream>

using namespace std;

int combination(int n, int r) {

	int arr[30][30];

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= r; j++) {

			if (i == j || j == 0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	return arr[n][r];

}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		cin >> n >> m;

		cout << combination(m, n) << endl;
	}
}