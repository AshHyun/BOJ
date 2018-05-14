#include<iostream>
#include<algorithm>
using namespace std;

int num;

int main() {
	int* array;
	int* brray;

	cin >> num;
	array = new int[num];
	brray = new int[num];
	for (int k = 0; k < num; k++) {
		cin >> array[k];
	}
	for (int k = 0; k < num; k++) {
		cin >> brray[k];
	}
	sort(array, array + num);
	sort(brray, brray + num);
	int result = 0;
	for (int k = 0; k < num; k++) {
		result += array[k] * brray[num - 1 -k];
	}
	cout << result;
}