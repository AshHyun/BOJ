#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int rev(int num) {
	string s = to_string(num);
	int len = s.length();
	int ret = 0;
	for (int k = 0; k < len; k++) {
		ret += (int)pow(10, k) * (s[k] - '0');
	}
	return ret;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << rev(rev(x) + rev(y));
}