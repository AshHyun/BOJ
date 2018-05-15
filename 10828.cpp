#include<stack>
#include<iostream>
#include<string>
using namespace std;

stack<int> st;

int main() {
	int temp;
	int num;
	int item;
	string which;
	cin >> num;

	for (int k = 0; k < num; k++) {
		cin >> which;
		if (which == "push") {
			cin >> item;
			st.push(item);
		}
		else if (which == "pop") {
			if (st.empty()) cout << -1 << endl;
			
			else {
				temp = st.top();
				cout << temp << endl;
				st.pop();
			}
		}
		else if (which == "size") cout << st.size() << endl;
		else if (which == "empty") cout << st.empty() << endl;
		else if (which == "top") {
			if (st.empty()) cout << -1 << endl;
			else cout << st.top() << endl;
		}
	}
}