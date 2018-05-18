#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int arr[26];
vector<char> v;

int main() {
	int n;
	cin >> n; 
	for (int k = 0; k < n; k++) {
		string s;
		cin >> s;
		arr[s[0] - 'a']++;
	}
	for (int k = 0; k < 26; k++) {
		if (arr[k] >= 5) v.push_back((char)('a' + k));
	}
	sort(v.begin(), v.end());
	if (v.size()) {
		for (int k = 0; k < v.size(); k++) {
			cout << v[k];
		}
	}
	else cout << "PREDAJA";
}