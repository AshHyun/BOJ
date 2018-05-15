#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int di = 2;
	while ( n > 1) {
		if (n % di == 0) {
			cout << di << "\n";
			n /= di;
		}
		else {
			di++;
		}
	}
}