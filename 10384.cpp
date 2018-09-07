#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	cin.ignore();
	for(int t = 0; t < tc; t++) {
		vector<int> arr(26, 0);
		string s;
		getline(cin, s);
		for (int k = 0; k < s.length(); k++) {
			char cur = s[k];
			if (isalpha(cur)) {
				cur = tolower(cur);
				arr[cur - 'a']++;
			}
		}
		bool S, D, T;
		S = D = T = true;
		for (int k = 0; k < 26; k++) {
			if (arr[k] < 3) T = false;
			if (arr[k] < 2) D = false;
			if (arr[k] < 1) S = false;
		}
		if (T) cout << "Case " << t + 1 << ": Triple pangram!!!" << endl;
		else if (D) cout << "Case " << t + 1 << ": Double pangram!!" << endl;
		else if (S) cout << "Case " << t + 1 << ": Pangram!" << endl;
		else cout << "Case " << t + 1 << ": Not a pangram" << endl;
	}
}