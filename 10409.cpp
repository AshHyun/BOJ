#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, T;
	cin >> N >> T;
	vector<int> arr(N);
	for (int k = 0; k < N; k++) {
		cin >> arr[k];
	}
	int cur = 0;
	int S = 0;
	while (cur < N) {
		S += arr[cur];
		if (S > T) {
			cout << cur;
			return 0;
		}
		if (cur == N - 1) {
			cout << N;
			return 0;
		}
		cur++;
	}
}