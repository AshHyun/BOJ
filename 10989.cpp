#include<iostream>
#include<algorithm>
#pragma warning (disable : 4996)
using namespace std;

int arr[10001];

int main() {

	int N;
	scanf("%d", &N);

	for (int k = 0; k < N; k++) {
		int input;
		cin >> input;
		arr[input]++;
	}
	for (int k = 1; k <= 10000; k++) {
		for (int i = 0; i < arr[k]; i++) {
			printf("%d\n", k);
		}
	}
}
