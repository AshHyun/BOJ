#include<string>
#include<iostream>
using namespace std;

int gen(int num) {
	string NUM = to_string(num);
	int size;
	size = NUM.size();
	for (int k = 0; k < size; k++) {
		num += (NUM[k]) - '0';
	}
	return num;
}

int main() {
	int N;
	bool found = false;
	cin >> N;
	for (int k = 1; k < N; k++) {
		if (gen(k) == N) {
			cout << k;
			found = true;
			break;
		}
	}
	if (!found) cout << 0;
}