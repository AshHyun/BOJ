#include<iostream>
#include<algorithm>
using namespace std;

int arr[10];

int main() {
	int s = 0;
	for (int k = 0; k < 10; k++) {
		cin >> arr[k];
		s += arr[k];
	}
	cout << s / 10 << endl;
	sort(arr, arr + 10);
	int cur = 0;
	int MAX = 0;
	int which = arr[0];
	while (cur < 10) {
		int it = cur;
		while (it < 9 && arr[it] == arr[it + 1]) {
			it++;
		}
		if (it - cur + 1 > MAX) {
			MAX = it - cur + 1;
			which = arr[cur];
		}
		cur++;
	}
	cout << which;
}