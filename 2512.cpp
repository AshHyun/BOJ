#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	int s = 0;
	for (int k = 0; k < n; k++) {
		cin >> arr[k];
		s += arr[k];
	}
	int MAX;
	cin >> MAX;

	sort(arr.begin(), arr.end());
	if (MAX >= s) return cout << arr[n - 1], 0;

	int st = 0; int en = arr[n - 1];
	while (st < en) {
		int mid = (st + en) / 2;
		int S = 0;
		for (int k = 0; k < n; k++) {
			if (arr[k] < mid) S += arr[k];
			else S += mid;
		}
	//	cout << "st " << st << " mid " << mid << " end " << en << endl;
		if (S >= MAX) en = mid;
		else st = mid + 1;
	}

	int S = 0;
	for (int k = 0; k < n; k++) {
		if (arr[k] < st) S += arr[k];
		else S += st;
	}
	if (S > MAX) st--;
	cout << st;
}