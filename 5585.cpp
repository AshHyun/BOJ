#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	n = 1000 - n;
	int ctr = 0;

	while (n > 0) {
		if (n >= 500) {
			n -= 500;
			ctr++;
			continue;
		}
		else if (n >= 100) {
			n -= 100;
			ctr++;
			continue;
		}
		else if (n >= 50) {
			n -= 50;
			ctr++;
			continue;
		}
		else if (n >= 10) {
			n -= 10;
			ctr++;
			continue;
		}
		else if (n >= 5) {
			n -= 5;
			ctr++;
			continue;
		}
		else {
			n--;
			ctr++;
		}
	}
	cout << ctr;
}