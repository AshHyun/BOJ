#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<string> stfront;
stack<string> stback;
string temp;

void left () {
	if (stfront.empty()) return;
	else {
		temp = stfront.top();
		stback.push(temp);
		stfront.pop();
	}
}

void right() {
	if (stback.empty()) return;
	else {
		temp = stback.top();
		stfront.push(temp);
		stback.pop();
	}
}

void del() {
	if (stfront.empty()) return;
	else stfront.pop();
}

int main() {
	int rep;
	cin >> rep;
	for (int k = 0; k < rep; k++) {
		string input;
		cin >> input;
		int len = input.size();
		for (int m = 0; m < len; m++) {
			if (input.substr(m,1) == "<") left();
			else if (input.substr(m, 1) == ">") right();
			else if (input.substr(m, 1) == "-") del();
			else stfront.push(input.substr(m, 1));
		}
		while (!stfront.empty()) {
			temp = stfront.top();
			stback.push(temp);
			stfront.pop();
		}
		while (!stback.empty()) {
			cout << stback.top();
			stback.pop();
		}
		cout << endl;
	}
}