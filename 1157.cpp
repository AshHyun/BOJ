#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <iostream>
#include <limits.h>
#include <map>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int IT_MAX = 1 << 20;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;
#define szz(x) (int)(x).size()
#define rep(i, n) for(int i=0;i<n;i++)

vector<int> v(26, 0);

int main() {
	string s;
	cin >> s;
	int size = s.length();
	for (int k = 0; k < size; k++) {
		char temp = s[k];
		v[toupper(temp) - 'A']++;
	}
	int MAX = -1;
	int maxindex = -1;
	bool q = false;
	rep(i, 26) {
		if (v[i] == 0) continue;
		if (MAX == v[i]) {
			q = true;
		}
		
		if (MAX < v[i]) {
			q = false;
			maxindex = i;
			MAX = v[i];
		}
	}
	if (q) cout << "?";
	else cout << (char)(maxindex + 'A');
}