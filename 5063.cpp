#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + c == b) { 
			cout << "does not matter" << endl; 
		}
		else if (a + c > b) {
			cout << "do not advertise" << endl;
		}
		else if (a + c < b) {
			cout << "advertise" << endl;
		}
	}
}

