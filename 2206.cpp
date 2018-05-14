#include<iostream>
#include<queue>
#include<utility>
#include<string>
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> p;


int N, M;
int map[1000][1000];
int res[1000][1000][2];
bool visited[1000][1000][2];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void visit(pii co,int wall) {
	visited[co.second][co.first][wall] = true;
	//cout << "visited " << co.second << " " << co.first << endl;
}

void bfs(pii start) {
	queue<p> q;
	q.push(p(start, 0));
	visit(start, 0);
	while (!q.empty()) {
		p cur = q.front();
		q.pop();

		pii co = cur.first;
		int copyx = co.first;
		int copyy = co.second;

		int wall = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = copyx + dx[k];
			int y = copyy + dy[k];
			
			if (!(x >= 0 && x < M && y >= 0 && y < N)) continue;

			
			if (wall) {
				if (!visited[y][x][1]) {
					if (map[y][x] == 0) {

						visit(pii(x, y), wall);
						q.push(p(pii(x, y), 1));
						//cout << "push " << y << " " << x << " " << 1 << endl;
						res[y][x][1] = res[copyy][copyx][1] + 1;
					}
				
				}
			}
			
			else {
				if (!visited[y][x][0]) {
					if (map[y][x] == 0) {
						visit(pii(x, y), 0);
						q.push(p(pii(x, y), 0));
						//cout << "push " << y << " " << x << " " << 0 << endl;
						res[y][x][0] = res[copyy][copyx][0] + 1;
					}
					else if (map[y][x] == 1) {
						visit(pii(x, y), wall);
						q.push(p(pii(x, y), 1));
						//cout << "push " << y << " " << x << " " << 1 << endl;
						res[y][x][1] = res[copyy][copyx][0] + 1;
					}
				}
			}
			
		}
	}
}


int main() {
	cin >> N >> M;
	for (int y = 0; y < N; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < M; x++) {
			map[y][x] = s[x] - '0';
		}
	}

	if (N == 1 && M == 1) {
		cout << 1;
		return 0;
	}

	bfs(pii(0, 0));

	if (res[N - 1][M - 1][0] == 0 && res[N - 1][M - 1][1] == 0) cout << -1;
	else if (res[N - 1][M - 1][0] == 0) cout << res[N - 1][M - 1][1] + 1;
	else if (res[N - 1][M - 1][1] == 0) cout << res[N - 1][M - 1][0] + 1;
	else cout << min(res[N - 1][M - 1][1], res[N - 1][M - 1][0]) + 1;
}