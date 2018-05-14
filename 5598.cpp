#include<iostream>
#include<string>
using namespace std;

int main() {
	string which;
	cin >> which;
	int size = which.length();
	for (int k = 0; k < size; k++) {
		if (which[k] == 'A') {
			which[k] = 'X';
		}
		else if (which[k] == 'B') {
			which[k] = 'Y';
		}
		else if (which[k] == 'C') {
			which[k] = 'Z';
		}
		else {
			which[k] = which[k] - 3;
		}
	}
	cout << which;
}