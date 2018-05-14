#include<iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;

	while (tc--) {
		int s;
		cin >> s;
		int numop;
		cin >> numop;
		for (int k = 0; k < numop; k++) {
			int a, b;
			cin >> a >> b;
			s += a * b;
		}
		cout << s << endl;
	}
}