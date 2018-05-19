#include<iostream>
using namespace std;

int main() {
	int ctr = 1;
	int r;
	cin >> r;
	while (r != 0) {
		int w, l;
		cin >> w >> l;
		if (4 * r*r >= w*w + l * l) cout << "Pizza " << ctr << " fits on the table." << endl;
		else cout << "Pizza " << ctr << " does not fit on the table." << endl;
		ctr++;
		cin >> r;
	}
	
}