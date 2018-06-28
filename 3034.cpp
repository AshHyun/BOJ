#include<iostream>
using namespace std;

int main() {
	int N, W, H;
	cin >> N >> W >> H;
	for (int k = 0; k < N; k++) {
		int x;
		cin >> x;
		if (x*x > W*W + H * H) {
			cout << "NE" << endl;
		}
		else cout << "DA" << endl;
	}
}