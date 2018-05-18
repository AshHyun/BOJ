#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<tuple>
#include<algorithm>
using namespace std;

typedef tuple<int, int, int, string> t;



int main() {
	vector<t> v;
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		string s;
		int a, b, c;
		cin >> s >> a >> b >> c;	
		v.push_back(t(c, b, a, s));
	}
	sort(v.begin(), v.end());
	string MIN;
	tie(ignore, ignore, ignore, MIN) = v[v.size()-1];
	string MAX;
	tie(ignore, ignore, ignore, MAX) = v[0];
	cout << MIN << endl;
	cout << MAX;
}