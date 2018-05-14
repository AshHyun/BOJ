#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int *arr;
	arr = new int[10];
	for (int k = 0; k < 10; k++) {
		cin >> arr[k];
		arr[k] %= 42;
	}
	sort(arr, arr + 10);
	int ctr = 1;
	for (int k = 1; k < 10; k++) {
		if (arr[k - 1] != arr[k]) ctr++;
	}
	cout << ctr;
}