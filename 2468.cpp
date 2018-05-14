#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>
using namespace std;

typedef pair<int, int> pii;

int map[100][100];
bool visited[100][100];
int N;
queue<pii> q;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0, 1, 0, -1 };

void init() {
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			visited[y][x] = false;
		}
	}
}

void bfs(int x, int y, int rain) {
	q.push(pii(x, y));
	visited[y][x] = true;
	while (!q.empty()) {
		pii cur = q.front();
		q.pop();

		int copyx = cur.first;
		int copyy = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = copyx + dx[k];
			int y = copyy + dy[k];

			if (!(x >= 0 && x < N && y >= 0 && y < N)) continue;

			if (map[y][x] > rain && !visited[y][x]) {
				q.push(pii(x, y));
				visited[y][x] = true;
		//		cout << "visited " << y << " " << x << endl;
			}
		}
	}
}

int main() {
	cin >> N;
	int M = 0;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			cin >> map[y][x];
			M = max(M, map[y][x]);
		}
	}
	int maxarea = 0;
	for (int k = 0; k < M; k++) {
		int ctr = 0;
		init();
		
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < N; x++) {
				if (!visited[y][x] && map[y][x] > k) {
					bfs(x, y, k);
					ctr++;
				}
			}
		}

	//	cout << "k : " << k << " ctr : " << ctr << endl;
		maxarea = max(maxarea, ctr);
	}
	cout << maxarea;
}