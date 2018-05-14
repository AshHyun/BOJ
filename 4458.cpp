#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {

	int n;
	cin >> n;
	cin.ignore(256, '\n');
	for (int k = 0; k < n; k++) {
		string s;
		getline(cin, s);
		s[0] = toupper(s[0]);
		cout << s << endl;
	}
	
}

