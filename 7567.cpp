#include<stack>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string input;
	cin >> input;
	stack<char> st;
	int result = 0;
	int size = input.length();
	for (int k = 0; k < size; k++) {
		if (st.empty()) {
			st.push(input[k]);
			result += 10;
			//cout << "first" << endl;
		}
		else {
			if (st.top() == ')') {
				if (input[k] == ')') {
					result += 5;
					st.push(input[k]);

				}
				else {
					result += 10;
					st.push(input[k]);

				}
			}
			else {
				if (input[k] == ')') {
					result += 10;
					st.push(input[k]);

				}
				else {
					result += 5;
					st.push(input[k]);
		//			cout << 5 << endl;
				}
			}
		}
	}
	cout << result;
}
