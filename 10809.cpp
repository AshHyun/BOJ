#include<iostream>
#include<algorithm>
using namespace std;

int nums[3];
void swap(int &a, int &b) {
	int temp;
	temp = b; 
	b = a;
	a = temp;
}

int main() {
	for (int k = 0; k < 3; k++) {
		cin >> nums[k];
	}
	for (int k = 0; k < 2; k++) {
		if (nums[k] > nums[k + 1]) swap(nums[k], nums[k + 1]);
	}
	for (int k = 0; k < 2; k++) {
		if (nums[k] > nums[k + 1]) swap(nums[k], nums[k + 1]);
	}
	cout << nums[1];
}