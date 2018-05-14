#include<iostream>
#include<string>
using namespace std;

int main() {
	string first, firstmax, firstmin;
	string second, secondmax, secondmin;
	cin >> first >> second;
	firstmax = first;
	firstmin = first;
	secondmax = second;
	secondmin = second;

	int size1, size2;
	size1 = first.length();
	size2 = second.length();

	for (int k = 0; k < size1; k++) {
		if (first[k] == '5') firstmax[k] = '6';
		if (first[k] == '6') firstmin[k] = '5';
	}
	for (int k = 0; k < size2; k++) {
		if (second[k] == '5') secondmax[k] = '6';
		if (second[k] == '6') secondmin[k] = '5';
	}
	cout << stoi(firstmin, NULL, 10) + stoi(secondmin, NULL, 10) << " "
		<< stoi(firstmax, NULL, 10) + stoi(secondmax, NULL, 10);
}