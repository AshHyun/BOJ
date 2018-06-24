#include<string>
#include<iostream>
#include<vector>
using namespace std;

int alpha[26];

int main() {
	string s;
	getline(cin, s);
	while (!cin.fail()) {
		for (int k = 0; k < s.length(); k++) {
			if(s[k] != ' ') alpha[s[k] - 'a']++;
		}
		getline(cin, s);
	}

	
	int MAX = -1;

	vector<char> temp;
	for (int k = 0; k < 26; k++) {
		if (alpha[k] > MAX) {
			MAX = alpha[k];
			temp.clear();
			temp.push_back('a' + k);
		}
		else if (alpha[k] == MAX) {
			temp.push_back('a' + k);
		}
	}
	for (int k = 0; k < temp.size(); k++) {
		cout << char(temp[k]);
	}
}