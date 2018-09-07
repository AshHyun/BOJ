#include<iostream>
#include<vector>
#include<utility>
using namespace std;

typedef pair<int, int> pii;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<pii> result;
		for (int k = 1; k <= n / 2; k++) 
			if (k != n - k) result.push_back(pii(k, n - k));
		
		int size = result.size();

		cout << "Pairs for " << n << ": ";
		if (size == 0) {
			cout << endl;
			continue;
		}
		for (int k = 0; k < size - 1; k++) 
			cout << result[k].first << " " << result[k].second << ", ";
		cout << result[size - 1].first << " " << result[size - 1].second << endl;
	}
}