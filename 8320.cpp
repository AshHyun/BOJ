#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int ctr = 0;
	for (int a = 1; a <= N; a++) {
		for (int b = a; b <= N; b++) {
			if (a*b <= N) ctr++;
		}
	}
	cout << ctr;
}