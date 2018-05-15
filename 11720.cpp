#include<string>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	string nums;
	int sum = 0;
	int len;
	cin >> len;
	cin >> nums;
	for (int k = 0; k < len; k++) {
		sum += stoi(nums.substr(k, 1));
	}
	cout << sum;
}