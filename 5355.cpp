#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	cin.clear();
	cin.ignore(256, '\n');
	for (int k = 0; k < testcase; k++) {
		string sent;
		double num;
		getline(cin, sent);

		int blank = sent.find(" ");
		num = stod(sent.substr(0, blank));
		for (int j = 0; j < sent.size(); j++) {
			if (sent[j] == '@') {
				num *= 3;
			}
			else if (sent[j] == '%') {
				num += 5;
			}
			else if (sent[j] == '#') {
				num -= 7;
			}
		}
		
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << num << endl;
	}
	return 0;
}