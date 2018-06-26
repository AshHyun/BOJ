#include<iostream>
using namespace std;

int main() {
	int tc = 3;
	while (tc--) {
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		int totalA, totalB;
		totalA = 3600 * a + 60 * b + c;
		totalB = 3600 * d + 60 * e + f;
		int sub = totalB - totalA;
		cout << sub / 3600 << " " << sub % 3600 / 60 << " " << sub % 60 << endl;
	}
}