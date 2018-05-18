#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int r = 0;
	for (int k = 0; k < n; k++) {
		int a, b;
		cin >> a >> b;
		r += b % a;
	}
	cout << r;
}