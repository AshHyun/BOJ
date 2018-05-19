#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c = n - 1;
	while (c--) cout << " ";
	cout << "*" << endl;

	for (int k = 1; k < n; k++) {
		int c = n - 1 - k;
		while (c--) cout << " ";
		cout << "*";
		c = 2 * k - 1;
		while (c--) cout << " ";
		cout << "*" << endl;
	}
}