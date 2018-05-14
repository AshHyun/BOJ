#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	string* arr = new string[tc];

	for (int k = 0; k < tc; k++) {
		cin >> arr[k];
	}
	if (tc == 1) {
		cout << arr[0];
		return 0;
	}
	int len = arr[0].size();
	vector<char> result;

	for (int k = 0; k < len; k++) {
		bool same = false;
		char cur;
		for (int i = 0; i < tc-1; i++) {
			cur = arr[i][k];
			if (arr[i][k] == arr[i+1][k]) same = true;
			else {
				same = false;
				break;
			}
		}
		if (same) result.push_back(cur);
		else result.push_back('?');
	}
	for (int k = 0; k < len; k++) {
		cout << result[k];
	}
}