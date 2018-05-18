#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, d;
	cin >> n >> d;
	int ctr = 0;
	for (int k = 1; k <= n; k++) {
		string s = to_string(k);
		int len = s.size();
		for (int i = 0; i < len; i++) {
			if (s[i] - '0' == d) ctr++;
		}
	}
	cout << ctr;
}