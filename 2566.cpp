#include<iostream>
using namespace std;


int maxx = 0; 
int maxn, maxm;

int main() {

	for (int y = 1; y < 10; y++) {
		for (int x = 1; x < 10; x++) {
			int input;
			cin >> input;
			if (input > maxx) {
				maxx = input; 
				maxn = y;
				maxm = x;
			}
		}
	}
	cout << maxx << endl;
	cout << maxn << " " << maxm;
}