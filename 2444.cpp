#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		int c = n - k;
		while (c--) cout << " ";
		c = 2*k-1;
		while (c--) cout << "*";
		cout << endl;
	}
	for (int k = n - 1; k >= 1; k--) {
		int c = n - k;
		while (c--) cout << " ";
		c = 2 * k - 1;
		while (c--) cout << "*";
		cout << endl;
	}
}