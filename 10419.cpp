#include<iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int t;
		cin >> t;
		int x = 0;
		while (x + x * x <= t) {
			x++;
		}
		cout << x - 1 << endl;
	}
}