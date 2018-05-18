#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int num[10];

int main() {
	string s;
	cin >> s;
	for (int k = 0; k < s.size(); k++) {
		num[s[k] - '0']++;
	}
	int total = num[6] + num[9];
	if (total % 2 == 0) {
		num[6] = total / 2;
		num[9] = total / 2;
	}
	else {
		num[6] = total / 2 + 1;
		num[9] = total / 2 + 1;
	}
	int MAX = -1;
	for (int k = 0; k < 10; k++) {
		MAX = max(MAX, num[k]);
	}
	cout << MAX;
}