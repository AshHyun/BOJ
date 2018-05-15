#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

	const int A = 300;
	const int B = 60;
	const int C = 10;

	int ctra = 0;
	int ctrb = 0;
	int ctrc = 0;
	while (T > 0) {
		if (T >= A) {
			T -= A;
			ctra++;
			continue;
		}
		else if (T >= B) {
			T -= B;
			ctrb++;
			continue;
		}
		else if (T >= C) {
			T -= C;
			ctrc++;
			continue;
		}
		else {
			cout << -1;
			return 0;
		}
	}
	if (T == 0) cout << ctra << " " << ctrb << " " << ctrc;
}