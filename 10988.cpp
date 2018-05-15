#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.length();
	for (int k = 0; k < len / 2; k++) {
		if (s[k] != s[len - 1 - k]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	
}

