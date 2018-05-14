#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	cout << min(min(a, b), c) + min(x, y) - 50;
}