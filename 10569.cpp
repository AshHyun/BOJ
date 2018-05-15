#include<iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int k = 0; k < testcase; k++) {
		int v, e;
		cin >> v >> e;
		cout << 2 + e - v << endl;
	}
}