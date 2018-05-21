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

int N, M;
int edge1[101][101];
int edge2[101][101];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			edge1[i][j] = i == j ? 0 : INF;
			edge2[i][j] = i == j ? 0 : INF;
		}
	}

	for (int k = 0; k < M; k++) {
		int fi, se;
		cin >> fi >> se;
		edge1[fi][se] = 1;
		edge2[se][fi] = 1;
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				edge1[i][j] = min(edge1[i][j], edge1[i][k] + edge1[k][j]);
				edge2[i][j] = min(edge2[i][j], edge2[i][k] + edge2[k][j]);
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		int ctr = 0;
		for (int j = 1; j <= N; j++) {
			if (edge1[i][j] == INF && edge2[i][j] == INF) ctr++;
		}
		cout << ctr << endl;
	}
}