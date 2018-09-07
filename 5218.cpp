#include<iostream>
#include<string>
using namespace std;

int dis(char a, char b) {
	int A, B;
	A = a - 'A' + 1;
	B = b - 'A' + 1;

	if (B >= A) return B - A;
	else return B + 26 - A;
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string a, b;
		cin >> a >> b;
		cout << "Distances: ";
		for (int k = 0; k < a.length(); k++) {
			cout << dis(a[k], b[k]) << " ";
		}
		cout << endl;
	}
}