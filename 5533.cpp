#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> score(N, 0);

	vector<int> first;
	vector<int> second;
	vector<int> third;

	for (int k = 0; k < N; k++) {
		int a, b, c;
		cin >> a >> b >> c;
		first.push_back(a);
		second.push_back(b);
		third.push_back(c);
	}

	for (int k = 0; k < N; k++) {
		bool dup = false;
		int pivot = first[k];
		for (int i = 0; i < N; i++) {
			if (i != k && pivot == first[i]) {
				dup = true;
				break;
			}
		}
		if (dup) continue;

		score[k] += pivot;
	}
	for (int k = 0; k < N; k++) {
		bool dup = false;
		int pivot = second[k];
		for (int i = 0; i < N; i++) {
			if (i != k && pivot == second[i]) {
				dup = true;
				break;
			}
		}
		if (dup) continue;

		score[k] += pivot;
	}
	for (int k = 0; k < N; k++) {
		bool dup = false;
		int pivot = third[k];
		for (int i = 0; i < N; i++) {
			if (i != k && pivot == third[i]) {
				dup = true;
				break;
			}
		}
		if (dup) continue;

		score[k] += pivot;
	}
	for (int k = 0; k < N; k++) {
		cout << score[k] << endl;
	}
}