#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	long long n;
	long long m;
	cin >> m >> n;

	cout << max(m, n) - min(m, n);
}