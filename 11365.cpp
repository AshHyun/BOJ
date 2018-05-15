#include<iostream>
#include<string>
using namespace std;

int main() {
	do {
		string line;
		getline(cin, line);
		if (line == "END") break;
		int size = line.length();
		for (int k = 0; k < size; k++) {
			cout << line[size - 1 - k];
		}
		cout << endl;
	} while (1);
	return 0;
}