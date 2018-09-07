#include<string>
#include<iostream>
using namespace std;

string x;

void play() {
	int ret = 1;
	for (int k = 0; k < x.length(); k++) {
		ret *= x[k] - '0';
	}
	x = to_string(ret);
}

int main() {
	cin >> x;
	while (x != "0") {
		cout << x << " ";
		while (x.length() != 1) {
			play();
			cout << x << " ";
		}
		cout << endl;
		cin >> x;
	}
}