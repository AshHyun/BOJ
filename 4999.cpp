#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string a;
	string b;
	cin >> a >> b;

	if (a.size() >= b.size()) cout << "go";
	else cout << "no";
}