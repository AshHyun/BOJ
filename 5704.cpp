#include<string>
#include<iostream>
using namespace std;

bool alpha[26];

int main() {
	string s;
	getline(cin, s);

	while (s != "*") {
		fill(alpha, alpha + 26, false);
		
		int cur = 0;
		while (cur < s.size()) {
			if (s[cur] == ' ') {
				cur++;
				continue;
			}
			else {
				alpha[s[cur] - 'a'] = true;
				cur++;
			}
		}
		bool ok = true;
		for (int k = 0; k < 26; k++) {
			if (!alpha[k]) ok = false;
		}

		if (!ok) cout << "N" << endl;
		else cout << "Y" << endl;

		getline(cin, s);
	}
}