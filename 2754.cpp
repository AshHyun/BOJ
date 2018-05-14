#include<iostream>
#include<string>
using namespace std;

int main() {
	string option;
	cin >> option;
	char grade = option[0];
	double score;
	switch (grade) {
	case 'A':
		score = 4;
		break;
	case 'B':
		score = 3;
		break;
	case 'C':
		score = 2;
		break;
	case 'D':
		score = 1;
		break;
	default:
		cout << "0.0";
		return 0;
	}
	char add = option[1];
	switch (add) {
	case '+':
		score += 0.3;
		break;
	case '-':
		score -= 0.3;
		break;
	case '0':
		break;
	default:
		break;
	}
	cout << fixed;
	cout.precision(1);
	cout << score;
}