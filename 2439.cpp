#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int n = 0; n < N - i; n++)
			cout << " ";
		for (int k = 0; k < i; k++)
			cout << "*";
		cout << endl;
	}
	return 0;
}