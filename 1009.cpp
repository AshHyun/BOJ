#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b;
		cin >> a >> b;
		int ret = 1;
		for (int k = 0; k < b; k++) {
			ret *= a;
			ret %= 10;
		}
		cout << (ret + 9) % 10 + 1 << endl;
	}
}