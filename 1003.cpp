#include <iostream>

int results[41][2];

int main() {
	results[0][0] = 1;
	results[0][1] = 0;
	results[1][0] = 0;
	results[1][1] = 1;
	for (int k = 2; k < 42; k++) {
		results[k][0] = results[k - 1][0] + results[k - 2][0];
		results[k][1] = results[k - 1][1] + results[k - 2][1];
	}
	int testcase;
	int x;
	std::cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		std::cin >> x;
		std::cout << results[x][0] << " " << results[x][1] << std::endl;
	}
	return 0;
}
