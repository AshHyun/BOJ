#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
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

int N, K;

int dis[401][401];
int disr[401][401];

int main() {
	cin >> N >> K;

	for (int k = 1; k < N + 1; k++) {
		for (int i = 1; i < N + 1; i++) {
			dis[k][i] = i == k ? 0 : INF;
			disr[k][i] = i == k ? 0 : INF;
		}
	}

	for (int k = 0; k < K; k++) {
		int from, to;
		cin >> from >> to;
		dis[from][to] = 1;
		disr[to][from] = 1;
	}
	
	for (int k = 1; k <= N; k++) {
		for (int a = 1; a <= N; a++) {
			for (int b = 1; b <= N; b++) {
				dis[a][b] = min(dis[a][b], dis[a][k] + dis[k][b]);
				disr[a][b] = min(disr[a][b], disr[a][k] + disr[k][b]);
			}
		}
	}
	int s;
	cin >> s;
	while (s--) {
		int a, b;
		cin >> a >> b;

		if (dis[a][b] == INF && disr[a][b] == INF) cout << 0 << endl;
		else if (dis[a][b] != INF) cout << -1 << endl;
		else cout << 1 << endl;
	}

}