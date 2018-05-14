#include<iostream>
using namespace std;

bool open[101];

void change(int x) {
	if (open[x]) open[x] = false;
	else open[x] = true;
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		fill(open, open + 101, false);
		int n;
		cin >> n;
		for (int k = 1; k <= n; k++) {
			int cur = k;
			while (cur <= n) {
				change(cur);
				cur += k;
			}
		}
		int ctr = 0;
		for (int k = 1; k <= n; k++) {
			if (open[k]) ctr++;
		}
		cout << ctr << endl;
	}
}
