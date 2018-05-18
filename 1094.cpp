#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int x;
	cin >> x;
	int ctr = 0;
	while (x > 0) {
		if (x % 2 == 1) ctr++;
		x /= 2;
	}
	cout << ctr;
}