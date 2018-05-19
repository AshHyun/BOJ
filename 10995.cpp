#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		if (k % 2 == 0) {
			int c = n;
			while (c--) cout << " *";
			cout << endl;
		}
		else {
			int c = n - 1;
			while (c--) cout << "* ";
			cout << "*" << endl;
		}
	}
}