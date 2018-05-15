#include<iostream>
#include<string>
using namespace std;

int main() {
	int len;
	string x;
	cin >> len >> x;
	int a = 0, b = 0;
	for (int k = 0; k < len; k++) {
		if (x[k] == 'A') a++;
		else b++;
	}
	if (a > b) cout << "A";
	else if (a < b) cout << "B";
	else cout << "Tie";
}