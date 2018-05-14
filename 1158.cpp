#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	list<int> survivors;
	vector<int> josephus;
	for (int k = 1; k <= n; k++) {
		survivors.push_back(k);
	}
	list<int>::iterator kill;
	kill = survivors.begin();
	while (*kill != m) {
		kill++;
	}
	while (n > 0) {
		josephus.push_back(*kill);
		kill = survivors.erase(kill);
		if (kill == survivors.end()) kill = survivors.begin();
		n--;
		for (int rep = 0; rep < m - 1; rep++) {
			if (survivors.begin() == survivors.end()) break;
			kill++;
			if (kill == survivors.end()) kill = survivors.begin();
		}
	}
	int size = josephus.size();
	cout << "<" << josephus[0];
	for (int a = 1; a < size; a++) {
		cout << ", " << josephus[a];
	}
	cout << ">";
	return 0;
}