#include<iostream>
#include<algorithm>
using namespace std;

int score[5];

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		for (int k = 0; k < 5; k++) {
			cin >> score[k];
		}
		sort(score, score + 5);
		if (score[3] - score[1] >= 4) {
			cout << "KIN" << endl;
			continue;
		}
		else {
			cout << score[3] + score[2] + score[1] << endl;
		}
	}
}