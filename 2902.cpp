#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<char> arr;
int main() {
	string line;
	cin >> line;
	int size = line.length();
	if (size < 1) return 0;

	arr.push_back(line[0]);
	for (int k = 1; k < size; k++) {
		if (line[k] == '-') arr.push_back(line[k + 1]);
	}
	int arrsize = arr.size();
	for (int k = 0; k < arrsize; k++) {
		cout << arr[k];
	}
	return 0;
}