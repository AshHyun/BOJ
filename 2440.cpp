#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int n = 0; n < N - i; n++)
			cout << "*";
		cout << endl;
	}
	return 0;
}