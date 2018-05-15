#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;
typedef pair<int, int> pii;

const int dx[3] = { 1, 0, 1 };
const int dy[3] = { 0, 1, 1 };


int dp[1000][1000];
int map[1000][1000];
int N, M;

int main() {
	cin >> N >> M;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			cin >> map[y][x];
		}
	}

	queue<pii> q;
	q.push(pii(0, 0));
	dp[0][0] = map[0][0];
	while (!q.empty()) {
		pii cur = q.front();
		q.pop();
		int curx = cur.first;
		int cury = cur.second;

		for (int k = 0; k < 3; k++) {

			int x = curx + dx[k];
			int y = cury + dy[k];

			if (!(x >= 0 && x < M && y >= 0 && y < N)) continue;
		//	cout << "visited : " << y << " " << x << " from " << cury << " " << curx << endl;
			
			if (dp[y][x] < dp[cury][curx] + map[y][x]) {
				dp[y][x] = dp[cury][curx] + map[y][x];
				q.push(pii(x, y));
			}
		}
	}
	cout << dp[N - 1][M - 1];
}