#include<iostream>
#include<algorithm>
#include<utility>
#include<string>
#include<vector>
using namespace std;

typedef pair<int, string> p;
vector<p> v;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		v.resize(n);
		for (int k = 0; k < n; k++) {
			string s;
			int x;
			cin >> s >> x;
			v.push_back(p(x, s));
		}
		sort(v.begin(), v.end());
		cout << v[v.size() - 1].second << endl;
	}
}