#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> arr;
int main() {
	int n;
	cin >> n;

	for (int k = 0; k < n; k++) {
		int input;
		cin >> input;
		arr.push_back(input);
	}
	sort(arr.begin(), arr.end());
	cout << arr[0] << " ";
	for (int k = 1; k < n; k++) {
		if (arr[k - 1] == arr[k]) continue;
		cout << arr[k] << " ";
	}
}