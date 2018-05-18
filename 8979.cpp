#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<functional>
using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, pii> p;

vector<p> arr;
int main() {
	int n, target;
	int gold, silver, bronze;
	cin >> n >> target;
	for (int k = 0; k < n; k++) {
		int country, a, b, c;
		cin >> country >> a >> b >> c;
		if (country == target) {
			gold = a;
			silver = b;
			bronze = c;
			arr.push_back(p(pii(gold, silver), pii(bronze + 1, -1)));
		}
		arr.push_back(p(pii(a, b), pii(c, country)));
	}
	sort(arr.begin(), arr.end());

	int num = n;
	for (int k = 0; k < n; k++) {
		if (arr[k].second.second == -1) {
			num = k;
			gold = arr[k].first.first;
			silver = arr[k].first.second;
			bronze = arr[k].second.first;
			break;
		}
	}
	cout << n - num + 1;
}