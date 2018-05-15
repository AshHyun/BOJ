#include<stack>
#include<iostream>
#include<string>

#define opening '('
#define closing ')'
using namespace std;

stack<char> st;

int main() {
	int parts = 0;
	string ps;
	bool opened;
	cin >> ps;
	int len = ps.length();
	for (int k = 0; k < len; k++) {
		if (ps[k] == opening) {
			st.push(ps[k]);
			opened = true;
		}
		else {
			if (opened) {
				st.pop();
				parts += st.size();
				opened = false;
			}
			else if (!opened) {
				st.pop();
				parts += 1;
			}
		}
	}
	cout << parts;
}