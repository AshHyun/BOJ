#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (!(a == 0 && b == 0)) {
		if (a % b == 0) {
			cout << "multiple" << endl;
		}
		else if (b % a == 0) {
			cout << "factor" << endl;
		}
		else cout << "neither" << endl;

		cin >> a >> b;
	}
}