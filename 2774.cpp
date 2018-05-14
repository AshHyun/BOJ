#include<iostream>
#include<string>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int k = 0; k < testcase; k++) {
		int current[10] = { 0, };
		string which;
		cin >> which;
		int size = which.size();
		for (int j = 0; j < size; j++) {
			if (current[which[j] - '0'] == 0)
				current[which[j] - '0'] = 1;
		}
		int ctr = 0;
		for (int m = 0; m < 10; m++) {
	//		cout << current[m] << " ";
			if (current[m] == 1) ctr++;
		}
		cout << ctr << endl;
	}
}