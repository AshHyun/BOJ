#include <iostream>
#include <string>

using namespace std;

bool alpha[26];

bool wordcount(string s)
{
	int i = 0; 
	while (i < s.size()) {
		int cur = i;
		char temp = s[i];

		if (alpha[temp - 'a'] == true) return false;

		alpha[s[i] - 'a'] = true;
		while (cur < s.size() && s[cur] == temp) {
			cur++;
		}
		i = cur;
	}
	return true;
}
int main() {

	string s;
	int n;
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		fill(alpha, alpha + 26, false);
		cin >> s;

		if (wordcount(s) == true) {
			cnt++;
		}
	}

	cout << cnt << endl;
}