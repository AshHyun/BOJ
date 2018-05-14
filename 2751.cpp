#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	int num;
	int x;
	cin >> num;
	int* arr;
	arr = new int[num];
	for (int k = 0; k < num; k++) {
		cin >> x;
		arr[k] = x;
	}
	sort(arr, arr + num);
	for (int k = 0; k < num; k++) {
		cout << arr[k] << "\n";
	}
}
