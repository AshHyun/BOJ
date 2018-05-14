#include<iostream>
#include<cmath>

using namespace std;

int zrep(int n, int a, int b) {

	if (n == 1) { 
		if (a == 0 && b == 0) return 1;
		if (a == 0 && b == 1) return 2;
		if (a == 1 && b == 0) return 3;
		if (a == 1 && b == 1) return 4;
	}

	
	bool up, right, left, down;
	up = (a < pow(2, n - 1));
	right = (b >= pow(2, n - 1));
	down = (a >= pow(2, n - 1));
	left = (b < pow(2, n - 1));

	
	if (up && left) 
		return zrep(n - 1, a, b);
	if (up && right) 
		return pow(pow(2, n -1), 2) + zrep(n - 1, a, b - pow(2, n - 1));
	if (down && left) 
		return pow(pow(2, n - 1), 2) * 2 + zrep(n - 1, a - pow(2, n - 1), b);
	if (down && right) 
		return pow(pow(2, n - 1), 2) * 3 + zrep(n - 1, a - pow(2, n - 1), b - pow(2, n - 1));
}

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	cout << zrep(n, a, b) - 1;
	return 0;
}