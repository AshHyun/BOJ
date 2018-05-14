#include<iostream>
#include<string>
using namespace std;

int main() {
	string sen1, sen2, sen3, sen4, sen5, sen6, sen7, sen8;
	int ctr = 0;
	cin >> sen1;
	cin >> sen2;
	cin >> sen3;
	cin >> sen4;
	cin >> sen5;
	cin >> sen6;
	cin >> sen7;
	cin >> sen8;

	for (int i = 0; i < 8; i = i + 2) {
		if (sen1.at(i) == 'F')
			ctr += 1;
	}
	for (int i = 0; i < 8; i = i + 2) {
		if (sen3.at(i) == 'F')
			ctr += 1;
	}
	for (int i = 0; i < 8; i = i + 2) {
		if (sen5.at(i) == 'F')
			ctr += 1;
	}
	for (int i = 0; i < 8; i = i + 2) {
		if (sen7.at(i) == 'F')
			ctr += 1;
	}
	for (int i = 1; i < 8; i = i + 2) {
		if (sen2.at(i) == 'F')
			ctr += 1;
	}
	for (int i = 1; i < 8; i = i + 2) {
		if (sen4.at(i) == 'F')
			ctr += 1;
	}
	for (int i = 1; i < 8; i = i + 2) {
		if (sen6.at(i) == 'F')
			ctr += 1;
	}
	for (int i = 1; i < 8; i = i + 2) {
		if (sen8.at(i) == 'F')
			ctr += 1;
	}
	cout << ctr;
	return 0;
}
