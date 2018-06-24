#include<iostream>
#include<string>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string a;
		string b;
		cin >> a >> b;
		int ctr = 0; 
		for (int k = 0; k < a.length(); k++) {
			if (a[k] != b[k]) ctr++;
		}
		cout << "Hamming distance is " << ctr << ".\n";
	}
}