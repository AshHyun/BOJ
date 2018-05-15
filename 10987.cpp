#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ctr = 0; 
	int len = s.length();
	for (int k = 0; k < len; k++) {
		if (s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u') ctr++;
	}
	cout << ctr;
}

