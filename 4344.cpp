#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int rep;
	double result;
	cin >> rep;
	for (int k = 0; k < rep; k++) {
		int people;
		int ctr(0);
		double sum(0);
		cin >> people;
		vector<int> arr;
		for (int m = 0; m < people; m++) {
			int score;
			cin >> score;
			sum += score;
			arr.push_back(score);
		}
		double avg = sum / people;
		for (int n = 0; n < people; n++) {
			if (arr[n] > avg) ctr++;
		}
		result = (double)ctr / people * 100;
		result = floor((result * 1000) + 0.5) / 1000;
		cout.precision(3);
		cout << fixed;
		cout << result << "%" << endl;
	}
}