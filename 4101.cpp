#include<iostream>
using namespace std;

int main() {
	int a, b;
	do {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		if (a > b) cout << "Yes" << endl;
		else cout << "No" << endl;
	} while (!(a == 0 && b == 0));
}