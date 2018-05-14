#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int maxx = 0;
	int arr[3];
	int testcase;
	cin >> testcase;
	for (int k = 0; k < testcase; k++) {
		for (int k = 0; k < 3; k++) {
			cin >> arr[k];
		}
		sort(arr, arr + 3);
		int result = 0;
		int a = arr[0];
		int b = arr[1];
		int c = arr[2];
		if (a == b && b == c) {
			result = 10000 + a * 1000;
		}
		else if (a == b || b == c) {
			if (a == b) result = 1000 + 100 * a;
			else result = 1000 + 100 * b;
		}
		else {
			result = 100 * c;
		}
		maxx = max(maxx, result);
	}
	cout << maxx;
}
