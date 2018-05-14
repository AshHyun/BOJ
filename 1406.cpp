#include<stack>
#include<iostream>
#include<string>
using namespace std;

stack<string> front;
stack<string> back;
string temp;

void L() {
	if (front.empty()) return;
	else {
		temp = front.top();
		front.pop();
		back.push(temp);
	}
}

void D() {
	if (back.empty()) return;

	else {
		temp = back.top();
		back.pop();
		front.push(temp);
	}
}

void B() {
	if (front.empty()) return;
	else {
		front.pop();
	}
}

int main() {
	string word;
	int rep;
	char option;
	string add;
	int len;
	cin >> word;
	len = word.length();

	for (int k = 0; k < len; k++) {
		front.push(word.substr(k, 1));
	}
	cin >> rep;

	for (int m = 0; m < rep; m++) {
		cin >> option;
		if (option == 'L') L();
		else if (option == 'D') D();
		else if (option == 'P') {
			cin >> add;
			front.push(add);
		}
		else if (option == 'B') B();
	}

	//print
	while (!front.empty()) {
		temp = front.top();
		front.pop();
		back.push(temp);
	}
	while (!back.empty()) {
		cout << back.top();
		back.pop();
	}
}