#include<iostream>
using namespace std;


int main() {
	cin.tie(NULL);
	int a, b;
	do {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << a + b << "\n";
	} while (!(a == 0 && b == 0));
	return 0;
}