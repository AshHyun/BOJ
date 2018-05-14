#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;
	int *arr = new int[num];
	for (int k = 0; k < num; k++) {
		cin >> arr[k];
	}
	int maxx = 0;
	for (int a = 0; a < num; a++) {
		int it = a + 1;
		while (it < num && arr[it] > arr[it-1]) {
			maxx = max(maxx, arr[it] - arr[a]);
			it++;
		}
	}
	cout << maxx;
}