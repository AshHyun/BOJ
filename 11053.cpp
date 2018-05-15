#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector<int> lis;

int main() {
	cin >> N;
	vector<int> arr;
	for (int k = 0; k < N; k++) {
		int input;
		cin >> input;
		arr.push_back(input);
	}


	//init
	lis.push_back(0);
	for (int k = 0; k < N; k++) {
		if (lis[lis.size()-1] < arr[k]) lis.push_back(arr[k]);
		else {
			*lower_bound(lis.begin(), lis.end(), arr[k]) = arr[k];
		}
	}
	cout << lis.size() - 1;
}