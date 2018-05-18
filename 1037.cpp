#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr;

int main() {
	int x;
	int MAX = 0;
	int	MIN = 99999999;
	cin >> x;
	for (int k = 0; k < x; k++) {
		int input;
		cin >> input;
		arr.push_back(input);
		MAX = max(MAX, input);
		MIN = min(MIN, input);
	}
	cout << MAX * MIN;
}