#include<stack>
#include<iostream>
#include<string>

#define opening '('
#define closing ')'
using namespace std;

stack<char> st;


int main() {
	int num;
	cin >> num;
	for (int k = 0; k < num; k++) {
		bool correct = true;
		while (!st.empty()) st.pop();
		string ps;
		cin >> ps;
		int size;
		size = ps.length();
		for (int m = 0; m < size; m++) {
			if (ps[m] == opening) st.push(ps[m]);
			else if (ps[m] == closing) {
				if (st.empty() || st.top() != opening) {
					cout << "NO" << endl;
					correct = false;
					break;
				}
				else st.pop();
			}
		}
		if (!st.empty()) {
			cout << "NO" << endl;
			continue;
		}
		if (correct) cout << "YES" << endl;
	}
}