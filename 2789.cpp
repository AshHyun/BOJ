#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int k = 0; k < s.length(); k++) {
		if (s[k] == 'C' || s[k] == 'A' || s[k] == 'M' || s[k] == 'B' || s[k] == 'R' ||
			s[k] == 'I' || s[k] == 'D' || s[k] == 'G' || s[k] == 'E') continue;
		cout << s[k];
	}
}