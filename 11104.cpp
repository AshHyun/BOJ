#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		int res = 0;
		for (int k = 0; k < 24; k++) {
			res += pow(2, 23 - k)*(s[k] - '0');
		}
		cout << res << endl;
	}
}