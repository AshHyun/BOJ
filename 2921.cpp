#include<iostream>
using namespace std;

int main() {
	int n;
	int s = 0;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		s += k * (k + 1);
		s += k * (k + 1) / 2;
	}
	cout << s;
}