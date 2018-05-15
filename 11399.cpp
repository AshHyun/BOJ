#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	int* arr;
	int ppl;
	cin >> ppl;
	arr = new int[ppl];
	for (int k = 0; k < ppl; k++) {
		cin >> arr[k];
	}
	sort(arr, arr + ppl);
	int result = 0;
	int summ = 0;
	for (int i = 0; i < ppl; i++) {
		summ += arr[i];
		result += summ;
	}
	cout << result;
}