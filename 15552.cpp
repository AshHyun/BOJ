#include<iostream>
using namespace std;


int main() {
	cin.tie(NULL);


	int testcase;
	cin >> testcase;
	for (int k = 0; k < testcase; k++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}