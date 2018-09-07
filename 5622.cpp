#include<iostream>
#include<string>
using namespace std;

int main() {
	int arr[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	string s;
	cin >> s;
	int t = 0;
	for (int k = 0; k < s.length(); k++) {
		t += arr[s[k] - 'A'];
	}
	cout << t;
}