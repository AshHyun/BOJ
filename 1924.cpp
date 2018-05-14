#include<iostream>
using namespace std;

int main() {
	int month, date;
	cin >> month >> date;
	int days = 0;
	switch (month) {
	case 12:
		days += 30;
	case 11:
		days += 31;
	case 10:
		days += 30;
	case 9:
		days += 31;
	case 8:
		days += 31;
	case 7:
		days += 30;
	case 6:
		days += 31;
	case 5:
		days += 30;
	case 4:
		days += 31;
	case 3:
		days += 28;
	case 2:
		days += 31;
	case 1:
		days += 0;
	default:
		break;
	}
	days += date;
	int mod;
	mod = days % 7;
	switch (mod) {
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	default:
		break;
	}
}