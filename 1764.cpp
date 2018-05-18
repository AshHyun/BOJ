#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> unseenunheard;

int main() {
	int n, m;
	cin >> n >> m;
	set<string> unheard;
	for (int k = 0; k < n; k++) {
		string s;
		cin >> s;
		unheard.insert(s);
	}
	for (int k = 0; k < m; k++) {
		string s;
		cin >> s;
		if (unheard.find(s) == unheard.end()) continue;
		unseenunheard.push_back(s);
	}
	sort(unseenunheard.begin(), unseenunheard.end());
	cout << unseenunheard.size() << endl;
	for (int k = 0; k < unseenunheard.size(); k++) {
		cout << unseenunheard[k] << endl;
	}
}