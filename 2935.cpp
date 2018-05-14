#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
	string a, b;
	char op;
	cin >> a >> op >> b;
	int alen = a.length();
	int blen = b.length();
	if (op == '*') {
		cout << "1";
		for (int k = 0; k < alen + blen - 2; k++) {
			cout << "0";
		}
	}
	else if (op == '+') {
		if (alen > blen) {
			a[alen - blen] = '1';
			cout << a;
		}
		else if (blen > alen) {
			b[blen - alen] = '1';
			cout << b;
		}
		else {
			a[0] = '2';
			cout << a;
		}
	}
}