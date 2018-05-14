#include<iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int k;
	for (k = 0; k < x; k++) {
		if (k*(k + 1) / 2 < x) continue;
		
		break;
	}
	k--;
	int sub = x - (k * (k + 1)) / 2;
	if (k % 2 == 0) {
		cout << k + 2 - sub << "/" << sub;
	}
	else {
		cout << sub << "/" << k + 2 - sub;
	}
	
}