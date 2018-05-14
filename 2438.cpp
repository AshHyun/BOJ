#include<iostream>
using namespace std;

int main() {
	int star;
	cin >> star;
	for (int k = 1; k <= star; k++) {
		for (int i = 1; i <= k; i++)
			cout << "*";
		cout << endl;
	}
	return 0;
}