#include<iostream>

using namespace std;

int main() {
	int a, pivot;
	int num;
	cin >> a >> pivot;
	for (int k = 0; k < a; k++) {
		cin >> num;
		if (num < pivot) cout << num << " ";
	}
}