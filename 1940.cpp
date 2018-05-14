#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector<int> arr;
vector<int> lis;

int main() {
	cin >> N;
	for (int k = 0; k < N; k++) {
		int input;
		cin >> input;
		arr.push_back(input);
	}
	lis.push_back(0);
	for (int k = 0; k < N; k++) {
		if (arr[k] > lis[lis.size() - 1]) lis.push_back(arr[k]);
		else {
			*lower_bound(lis.begin(), lis.end(), arr[k]) = arr[k];
		}
	}
	cout << lis.size() - 1;
}