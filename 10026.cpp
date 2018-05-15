#include<iostream>
#include<utility>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
typedef pair<int, int> pii;

int N;
char map[100][100];
bool visited[100][100];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void init() {
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			visited[y][x] = false;
		}
	}
}

void nbfs(int a, int b) {
	char which = map[b][a];

	queue<pii> q;
	q.push(pii(a, b));
	visited[b][a] = true;

	while (!q.empty()) {
		pii cur = q.front();
		q.pop();

		int copyx = cur.first;
		int copyy = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = copyx + dx[k];
			int y = copyy + dy[k];

			if (!(x >= 0 && x < N && y >= 0 && y < N)) continue;

			if (!visited[y][x] && map[y][x] == which) {
				q.push(pii(x, y));
				visited[y][x] = true;
			}
		}

	}
}

void rbfs(int a, int b) {
	char which = map[b][a];

	queue<pii> q;
	q.push(pii(a, b));
	visited[b][a] = true;

	while (!q.empty()) {
		pii cur = q.front();
		q.pop();

		int copyx = cur.first;
		int copyy = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = copyx + dx[k];
			int y = copyy + dy[k];

			if (!(x >= 0 && x < N && y >= 0 && y < N)) continue;

			if (which == 'B') {
				if (!visited[y][x] && map[y][x] == which) {
					q.push(pii(x, y));
					visited[y][x] = true;
				}
			}
			else {
				if (!visited[y][x]) {
					if (map[y][x] == 'R' || map[y][x] == 'G') {
						q.push(pii(x, y));
						visited[y][x] = true;
					}
				}
			}
		}

	}
}

int main() {
	cin >> N;
	for (int y = 0; y < N; y++) {
		string s;
		cin >> s;
		for (int a = 0; a < N; a++) {
			map[y][a] = s[a];
		}
	}
	int ctr = 0;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (!visited[y][x]) {
				nbfs(x, y);
				ctr++;
			}
		}
	}
	cout << ctr << " ";
	init();
	//fill(visited, visited + 100, false);
	ctr = 0;

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (!visited[y][x]) {
				rbfs(x, y);
				ctr++;
			}
		}
	}
	
	cout << ctr;


}