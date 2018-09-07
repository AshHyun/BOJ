#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int C, K;
	cin >> C >> K;
	double c = C;
	c /= pow(10, K);
	c = floor(c + 0.5);
	c *= pow(10, K);
	cout << (int)c;
}