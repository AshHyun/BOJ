#include<string>
#include<iostream>
using namespace std;
int main() {
	string sent;
	cin >> sent;
	int len = sent.length();
	for (int k = 0; k < len; k += 10) cout << sent.substr(k, 10) << endl;
}