#include<iostream>
#include<algorithm>
using namespace std;

int arr[5];

int main() {
	int s = 0;
	for (int k = 0; k < 5; k++) {
		cin >> arr[k];
		s += arr[k];
	}
	sort(arr, arr + 5);
	cout << s / 5 << endl;
	cout << arr[2];
}