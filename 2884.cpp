#include<iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	int totalm;
	totalm = m + h * 60;
	if (totalm < 45) {
		totalm += 24 * 60;
	}
	totalm -= 45;
	int newh, newm;
	newh = totalm / 60;
	newm = totalm % 60;
	cout << newh << " " << newm;
}