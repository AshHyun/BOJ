#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int n, m;

int find(char* arr[], int num) {
	char ul, ur, dl, dr;
	for (int x = 0; x < n - num; x++) {
		for (int y = 0; y < m - num; y++) {
			ul = arr[x][y];
			ur = arr[x][y + num];
			dl = arr[x + num][y];
			dr = arr[x + num][y + num];
			if (ul == ur && ur == dl && dl == dr) {
				return num + 1;
			}
		}
	}
	return -1;
}

int main() {
	int maxx;
	char** arr;
	string ori;

	cin >> n >> m;
	arr = new char*[n];
	for (int k = 0; k < n; k++) {
		arr[k] = new char[m];
	}

	for (int j = 0; j < n; j++) {
		cin >> ori;
		for (int i = 0; i < m; i++) {
			arr[j][i] = ori[i];
		}
	}
	maxx = 1;
	for (int a = 1; a < min(m, n); a++) {
		maxx = max(maxx, find(arr, a));
	}
	cout << maxx*maxx;
	for (int z = 0; z < n; z++) {
		delete[] arr[z];
	}
	delete[] arr;
	return 0;
}
