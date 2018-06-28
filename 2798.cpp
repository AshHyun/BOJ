#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);
	for (int k = 0; k < N; k++) {
		cin >> arr[k];
	}
	int MAX = 0;
	for (int a = 0; a < N; a++) {
		for (int b = a + 1; b < N; b++) {
			for (int c = b + 1; c < N; c++) {
				int S = arr[a] + arr[b] + arr[c];
				if (S <= M && S > MAX) {
					MAX = S;
				}
			}
		}
	}
	cout << MAX;
}