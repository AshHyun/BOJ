#include<iostream>
using namespace std;

bool map[100][100];

int main() {
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		int a, b;
		cin >> a >> b;
		for (int y = b; y < b + 10; y++) {
			for (int x = a; x < a + 10; x++) {
				map[y][x] = true;
			}
		}
	}
	int ctr = 0;
	for (int y = 0; y < 100; y++) {
		for (int x = 0; x < 100; x++) {
			if (map[y][x]) ctr++;
		}
	}
	cout << ctr;
}