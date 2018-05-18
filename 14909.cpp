#include<iostream>
using namespace std;

int main() {
	int ctr = 0;
	int n;
	while (cin >> n) {
		if (n > 0) ctr++;
	}
	cout << ctr;
}