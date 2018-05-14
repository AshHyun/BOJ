#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num;
	double maxx(0), sum(0), score;
	cin >> num;
	for (int k = 0; k < num; k++) {
		cin >> score;
		maxx = max(maxx, score);
		sum += score;
	}
	double avg = (double)sum / num;
	cout << (double)(avg / maxx) * 100;
}