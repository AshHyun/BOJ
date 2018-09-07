#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		ll x, y;
		cin >> x >> y;
		ll len = y - x;
		ll pivot = sqrt(len);
		while (pivot*pivot <= len) pivot++;
		pivot--;

		ll ans = 2 * pivot - 1;
		ans += (ll)ceil((len - pivot * pivot) / (double)pivot);

		printf("%lld\n", ans);
	}
}