#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main() {
	vector<string> s;
	for (int k = 0; k < 5; k++) {
		string st;
		cin >> st;
		s.push_back(st);
	}
	for (int cur = 0; cur <= 15; cur++) {
		for (int k = 0; k < 5; k++) {
			if (s[k].size() <= cur) continue;
			cout << s[k][cur];
		}
	}
}