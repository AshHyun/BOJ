#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int k = 1; k <= 100; k++) {
		if (k + k * k + 1 == N) {
			cout << k;
			break;
		}
	}
}