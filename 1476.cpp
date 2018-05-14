#include<iostream>
using namespace std;


int main() {
	int E, S, M;
	cin >> E >> S >> M;
	E--;
    S--;
    M--;
	for (int i = 0; ; i++)
		if (i % 15 == E && i % 28 == S && i % 19 == M) {
			cout << i + 1;
			return 0;
		}
}