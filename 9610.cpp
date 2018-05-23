#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <queue>
#include <set>
#include <tuple>
#include <utility>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N; 
	cin >> N;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, ax = 0;
	for (int k = 0; k < N; k++) {
		int a, b;
		cin >> a >> b;
		if (a == 0 || b == 0) ax++;
		else if (a > 0) {
			if (b > 0) q1++;
			else q4++;
		}
		else {
			if (b > 0) q2++;
			else q3++;
		}
	}
	cout << "Q1: " << q1 << endl;
	cout << "Q2: " << q2 << endl;
	cout << "Q3: " << q3 << endl;
	cout << "Q4: " << q4 << endl;
	cout << "AXIS: " << ax << endl;
}