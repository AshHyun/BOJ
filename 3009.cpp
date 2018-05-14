#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int* arrx = new int[3];
	int* arry = new int[3];
	for (int k = 0; k < 3; k++) {
		cin >> arrx[k];
		cin >> arry[k];
	}
	sort(arrx, arrx + 3);
	sort(arry, arry + 3);
	int x = 2 * (arrx[0] + arrx[2]) - arrx[0] - arrx[1] - arrx[2];
	int y = 2 * (arry[0] + arry[2]) - arry[0] - arry[1] - arry[2];
	cout << x << " " << y;
}