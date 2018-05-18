#include<iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int st = 1;
	int en;
	for (int k = 1; k <= 100; k++) {
		if (k * k < m) st = k;
		if (k * k <= n) en = k;
	}
	if (m != 1) st++;

	int MIN = st * st;
	int sum = 0;
	for (int k = st; k <= en; k++) {
		sum += k * k;
	}
	if (sum == 0) cout << -1;
	else {
		cout << sum << endl;
		cout << MIN;
	}
}