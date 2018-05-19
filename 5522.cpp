#include<iostream>
using namespace std;

int main() {
	int s = 0;
	for (int k = 0; k < 5; k++) {
		int input;
		cin >> input;
		s += input;
	}
	cout << s;
}