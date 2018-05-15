#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	vector<int> arr;
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		int input;
		cin >> input;
		arr.push_back(input);
	}
	cout << *min_element(arr.begin(), arr.end()) << " " << *max_element(arr.begin(), arr.end());
}

