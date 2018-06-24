#include<iostream>
#include<string>
using namespace std;

bool notself[10001];

int main() {
	for (int k = 1; k < 10001; k++) {
		int dn = 0;
		string s = to_string(k);
		for (int i = 0; i < s.length(); i++) {
			dn += s[i] - '0';
		}
		dn += k;
		if (dn <= 10000) notself[dn] = true;
	}
	for (int k = 1; k < 10001; k++) {
		if (!notself[k]) printf("%d\n", k);
	}
}