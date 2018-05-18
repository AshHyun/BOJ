#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long k = sqrt(n * 2);
	while (k*(k + 1) / 2 <= n) {
		k++;
	}
	cout << k - 1;
}