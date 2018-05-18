#include<iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b;
		cin >> a >> b;
		cout << "You get " << a / b << " piece(s) and your dad gets " << a % b << " piece(s)." << endl;
	}
}