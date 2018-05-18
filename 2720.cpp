#include<iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int x;
		cin >> x;
		int a = 0;
		int b = 0; 
		int c = 0;
		int d = 0;
		while (x > 0) {
			if (x >= 25) {
				x -= 25;
				a++;
			}
			else if (x >= 10) {
				x -= 10;
				b++;
			}
			else if (x >= 5) {
				x -= 5;
				c++;
			}
			else {
				x -= 1;
				d++;
			}
			
		}
		cout << a << " " << b << " " << c << " " << d << endl;
	}
}