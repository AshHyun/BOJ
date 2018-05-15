#include<iostream>
#include<string>
using namespace std;

int main() {
	string which;
	cin >> which;
	int arr[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int size;
	size = which.length();
	for (int k = 0; k < size; k++) {
		arr[which[k] - 'a']++;
	}
	for (int m = 0; m < 25; m++) {
		cout << arr[m] << " ";
	}
	cout << arr[25];
}