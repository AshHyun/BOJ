#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		int c = k;
		while (c--) cout << " ";
		c = 2 * n - (2 * k + 1);
		while (c--) cout << "*";
		cout << endl;
	}
	
}