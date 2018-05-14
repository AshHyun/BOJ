#include<iostream>
using namespace std;

int main() {
	int num;
	int x, y;
	bool result = false;

	cin >> num;
	cin >> x >> y;
	for (int k = 0; k < num; k++) {
		int lx, ly, hx, hy;
		cin >> lx >> ly >> hx >> hy;
		if (x >= lx && x <= hx && y >= ly && y <= hy) {
			result = true;
		}
	}
	if (result) cout << "Yes";
	else cout << "No";
}