#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	while (n > 0) {
		if (n == 1) {
			cout << 1;
			return 0;
		}

		if (n % 2 != 0) {
			cout << 0;
			return 0;
		}
		n /= 2;
	}
}