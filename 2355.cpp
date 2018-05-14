#include<iostream>
#include<cmath>
#include<algorithm>

typedef long long ll;
using namespace std;

int main() {
	ll a_, b_;
	cin >> a_ >> b_;
	
	ll b = max(a_, b_);
	ll a = min(a_, b_);

	int flag;
	if (a < 0 && b >= 0) flag = 0;
	else if (a < 0 && b < 0) flag = 1;
	else if (a >= 0 && b >= 0) flag = 2;
	ll asum, bsum;
	switch (flag) {
	case 0:
		asum = a * (a - 1) / 2;
		bsum = b * (b + 1) / 2;
		cout << bsum - asum;
		break;
	case 1:
		asum = a * (a - 1) / 2;
		bsum = b * (b - 1) / 2;
		cout << -(asum - bsum - b);
		break;
	case 2:
		asum = a * (a + 1) / 2;
		bsum = b * (b + 1) / 2;
		cout << bsum - asum + a;
	}
}