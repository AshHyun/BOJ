#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;

int main() {
	int cl;
	int MAX;
	cin >> cl;
	for (int k = 1; k <= cl; k++) {
		MAX = 0;
		int n;
		cin >> n;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());

		for (int i = 0; i < n-1; i++) {
			MAX = max(MAX, v[i + 1] - v[i]);
		}
		cout << "Class " << k << endl;
		cout << "Max " << v[v.size() - 1] << ", Min " << v[0] << ", Largest gap " << MAX << endl;
	}
}