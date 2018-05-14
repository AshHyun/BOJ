#include<iostream>
#include<string>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int num = a * b * c;

	int current[10] = { 0, };
	string which;
	which = to_string(num);
	int size = which.size();
	for (int j = 0; j < size; j++) {
		current[which[j] - '0']++;
	}
	
	for (int m = 0; m < 10; m++) {
		cout << current[m] << endl;
	}
}