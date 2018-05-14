#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	string a;
	string b;
	
	cin >> a >> b;

	cout << stoi(a) * (b[2] - '0') << endl;
	cout << stoi(a) * (b[1] - '0') << endl;
	cout << stoi(a) * (b[0] - '0') << endl;
	cout << stoi(a) * stoi(b);
}

