#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;

int main() {
	ll N, M;
	cin >> N >> M;
	vector<int> v(N);

	for (int k = 0; k < N; k++) {
		cin >> v[k];
	}

	int ctr = 0;
	int st = 0, en = 0;

	ll cursum = v[0];
	while (en < N && st < N) {
		
		if (cursum == M) {
			ctr++;
		}
		if (cursum <= M) {
			if (en + 1 <  N) cursum += v[++en];
			else break;
		}
		else cursum -= v[st++];
	}
	cout << ctr;
}