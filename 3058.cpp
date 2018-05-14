#include<iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	int input;
	for (int k = 0; k < testcase; k++) {
		int sum = 0;
		int min = 99999999;
		for (int j = 0; j < 7; j++) {
			cin >> input;
			if (input % 2 == 0) {
				if (min > input) min = input;
				sum += input;
			}
		}
		cout << sum << " " << min << endl;
	}
}