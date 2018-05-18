#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int totalc = 0;
		double totalg = 0;
		for (int k = 0; k < n; k++) {
			int c;
			double g;
			cin >> c >> g;
			totalc += c;
			totalg += g * c;
		}
		double result = floor((totalg / totalc) * 10 + 0.5) / 10;
		cout << fixed;
		cout.precision(1);
		cout << totalc << " " << result << endl;
	}
}