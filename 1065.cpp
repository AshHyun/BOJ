#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 100) {
		cout << n;
		return 0;
	}
	if (n == 1000) n = 999;

	int ctr = 99;
	for (int k = 111; k <= n; k++) {
		string s = to_string(k);
		if (s[0] - s[1] == s[1] - s[2]) ctr++;
	}
	cout << ctr;
}