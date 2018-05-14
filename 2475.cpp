#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num;
	
	int result = 0;
	for (int k = 0; k < 5; k++) {
		cin >> num;
		result += (pow(num, 2));
	}
	cout << result % 10;
}