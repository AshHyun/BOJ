#include<iostream>
using namespace std;

int ctr;

void divide(int n, int m) {
	if (n == 1 && m == 1) return;
	ctr++;
	if (n > m) {
		divide(n / 2, m);
		divide(n - n / 2, m);
	}
	else if (n <= m) {
		divide(n, m / 2);
		divide(n, m - m / 2);
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	divide(m, n);
	cout << ctr;
}