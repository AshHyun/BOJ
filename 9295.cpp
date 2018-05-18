#include<iostream>
using namespace std;

int main() {
	int n; 
	cin >> n;
	for (int k = 1; k <= n; k++) {
		int a, b;
		cin >> a >> b;
		cout << "Case " << k << ": " << a + b << endl;
	}
}