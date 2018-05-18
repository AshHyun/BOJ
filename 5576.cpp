#include<iostream>
#include<algorithm>
using namespace std;

int a[10];
int b[10];

int main() {
	for (int k = 0; k < 10; k++) {
		cin >> a[k];
	}
	for (int k = 0; k < 10; k++) {
		cin >> b[k];
	}
	sort(a, a + 10);
	sort(b, b + 10);

	cout << a[9] + a[8] + a[7] << " " << b[9] + b[8] + b[7];
}