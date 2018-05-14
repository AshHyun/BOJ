#include<iostream>
using namespace std;

int main() {
	int arr[8];
	int flag;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	if (arr[0] < arr[1])
		flag = 1;
	else if (arr[0] > arr[1])
		flag = 2;
	if (flag == 1) {
		for (int k = 1; k < 8; k++) {
			if (arr[k - 1] > arr[k]){
				cout << "mixed";
				return 3;
			}
		}
		cout << "ascending";
		return 1;
	}
	if (flag == 2) {
		for (int k = 1; k < 8; k++) {
			if (arr[k - 1] < arr[k]) {
				cout << "mixed";
				return 3;
			}
		}
		cout << "descending";
		return 2;
	}
}