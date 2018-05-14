#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cur = 0;
	for (int k = 0; k < n; k++) {
		int input;
		cin >> input;
		cur += input;
	}
	cout << cur - (n - 1);
}

