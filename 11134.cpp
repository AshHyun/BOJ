#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int N, C;
		cin >> N >> C;
		int res;
		res = ceil((double)N / C);
		cout << res << endl;
	}
}