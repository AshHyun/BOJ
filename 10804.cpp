#include<stack>
#include<iostream>
using namespace std;

int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

void reverse(int a, int b) {
	stack<int> temp;
	for (int k = a - 1; k < b; k++) {
		temp.push(arr[k]);
	}
	for (int k = a - 1; k < b; k++) {
		arr[k] = temp.top();
		temp.pop();
	}

}

int main() {
	int a, b;
	for (int k = 0; k < 10; k++) {
		cin >> a >> b;
		reverse(a, b);
	}
	for (int k = 0; k < 20; k++) {
		cout << arr[k] << " ";
	}
}