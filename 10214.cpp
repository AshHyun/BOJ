#include<iostream>
using namespace std;

int main() {

	int tc;
	cin >> tc;
	while (tc--) {
		int Y = 0;
		int K = 0;
		for (int k = 0; k < 9; k++) {
			int a, b;
			cin >> a >> b;
			Y += a;
			K += b;
		}
		if (Y == K) cout << "Draw" << endl;
		else if (Y > K) cout << "Yonsei" << endl;
		else cout << "Korea" << endl;
	}
	
	
}