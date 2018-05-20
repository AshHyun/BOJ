#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	ll MIN, MAX;
	cin >> MIN >> MAX;

	ll ctr = MAX - MIN + 1;
	vector<bool> check(MAX - MIN + 1, false);

	ll it = 2;
	while (it*it <= MAX) {
		ll cur = (MIN / (it*it)) * (it*it);
		if (cur < MIN) cur += it * it;

		while (cur <= MAX) {
			if (!check[cur - MIN]) {
				check[cur - MIN] = true;
				ctr--;
			}
			cur += it * it;
		}
		it++;
	}
	cout << ctr;
}