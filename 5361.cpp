#include<iostream>
using namespace std;

const double A = 350.34;
const double B = 230.90;
const double C = 190.55;
const double D = 125.30;
const double E = 180.90;


int main() {
	int tc;
	cin >> tc;

	while (tc--) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;

		cout << "$";
		cout << fixed;
		cout.precision(2);
		cout << A * a + B * b + C * c + D * d + E * e << endl;
	}
}