#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int aprice, bprice, bpricelimit, bpriceadd, x;
	cin >> aprice >> bprice >> bpricelimit >> bpriceadd >> x;
	int a, b;
	a = x * aprice;
	if (x < bpricelimit) {
		b = bprice;
	}
	else {
		b = bpriceadd*(x - bpricelimit) + bprice;
	}
	cout << min(a, b);
	return 0;
}