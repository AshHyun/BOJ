#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[9], summ(0), spy1, spy2;
	for (int k = 0; k < 9; k++) {
		cin >> arr[k];
		summ += arr[k];
	}
	sort(arr, arr + 9);

	for (int a = 0; a < 9; a++) {
		for (int b = a + 1; b < 9; b++) {
			if (summ - arr[a] - arr[b] == 100) {
				spy1 = a;
				spy2 = b;
			}
		}
	}
	int it(0);
	while (it < 9) {
		if (it == spy1 || it == spy2) {
			it++;
			continue;
		}
		cout << arr[it] << endl;
		it++;
	}
}