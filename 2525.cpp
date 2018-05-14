#include<iostream>
using namespace std;

int main() {
	int h, m;
	int time, ah, am;
	cin >> h >> m;
	cin >> time;
	time = time + m;
	ah = time / 60;
	am = time % 60;
	h = ah + h;
	while (h > 23) {
		h -= 24;
	}
	cout << h << " " << am;
	
}