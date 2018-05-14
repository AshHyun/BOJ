#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int left, right, up, down;
	int x, y, endx, endy;

	cin >> x >> y >> endx >> endy;
	left = x;
	right = endx - x;
	up = endy - y;
	down = y;

	cout << min(min(left, right), min(up, down));
	return 0;
}