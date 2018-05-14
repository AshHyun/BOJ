#include<iostream>
using namespace std;

int main() {
	int h, m, s;
	int time, ah, am, as;
	cin >> h >> m >> s;
	cin >> time;

	as = time + s;
	am = as / 60;
	as = as % 60; //as done

	am = am + m;
	ah = am / 60;
	am = am % 60;
	h = ah + h;
	while (h > 23) {
		h -= 24;
	}
	cout << h << " " << am << " " << as;

}