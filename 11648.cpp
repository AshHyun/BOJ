#include<string>
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ctr = 0;
	while (n >= 10) {
		string s = to_string(n);
		int res = 1;
		for (int k = 0; k < s.size(); k++) {
			res *= s[k] - '0';
		}
		n = res;
		ctr++;
	}
	cout << ctr;
}