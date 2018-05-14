#include<iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	int a, b;
	for (int k = 0; k < testcase; k++) {
		a = 0; b = 0;
		int temp;
		cin >> a >> b;
		if (a == b) {
			cout << a << "\n";
		}
		else if (a > b) {
			temp = a;
			while (a % b != 0) {
				a += temp;
			}
			cout << a << "\n";
		}
		else if (b > a) {
			temp = b;
			while (b % a != 0) {
				b += temp;
			}
			cout << b << "\n";
		}
	}
}