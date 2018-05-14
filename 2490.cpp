#include<iostream>
using namespace std;

int main() {
	
	for (int a = 0; a < 3; a++) {
		int ctr0 = 0;
		int ctr1 = 0;
		for (int k = 0; k < 4; k++) {
			int x;
			cin >> x;
			if (x == 0) ctr0++;
			else ctr1++;
		}
		switch (ctr1) {
			case 0:
				cout << "D" << endl;
				break;
			case 1:
				cout << "C" << endl;
				break;
			case 2:
				cout << "B" << endl;
				break;
			case 3:
				cout << "A" << endl;
				break;
			case 4:
				cout << "E" << endl;
				break;
			default:
				break;
		}
	}
}