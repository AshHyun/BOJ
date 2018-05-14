#include<iostream>
#include<string>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	for (int k = 0; k < testcase; k++) {
		int times;
		string which;
		cin >> times >> which;
		int length = which.size();
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < times; j++) cout << which[i];
		}
		cout << endl;
	}
	return 0;
}