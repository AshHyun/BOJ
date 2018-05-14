#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string num;
	cin >> num;
	int len = num.length();
	int* arr;
	arr = new int[len];
	for (int k = 0; k < len; k++) {
		arr[k] = int(num[k] - '0');
	}
	sort(arr, arr + len);
	for (int k = len - 1; k >= 0; k--) {
		cout << arr[k];
	}
}