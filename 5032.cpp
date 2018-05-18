#include<iostream>
using namespace std;

int main() {
	int e, f, c;
	cin >> e >> f >> c;
	int totalcan = e + f;
	int ctr = 0;
	while (totalcan >= c) {
		totalcan -= c;
		totalcan++;
		ctr++;
	}
	cout << ctr;
}