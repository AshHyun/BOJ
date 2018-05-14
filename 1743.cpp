#include<iostream>
#include<queue>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int, int> pii;

int N, M;
bool map[101][101];
bool visited[101][101];
queue<pii> q;
vector<pii> v;
const int dx[4] = { 0, 0, 1, -1 };
const int dy[4] = { 1, -1, 0, 0 };

int bfs(pii p) {
	q.push(p);
	visited[p.second][p.first] = true;
	int ctr = 1;

	while (!q.empty()) {
		pii cur = q.front();
		q.pop();
		int curx = cur.first;
		int cury = cur.second;

		for (int k = 0; k < 4; k++) {
			int x = curx + dx[k];
			int y = cury + dy[k];

			if (visited[y][x] || !(x > 0 && x <= M && y > 0 && y <= N)) continue;

			if (map[y][x]) {
				q.push(pii(x, y));
				visited[y][x] = true;
				ctr++;
			}
		}
	}
	return ctr;
}

int main() {
	cin >> N >> M;
	int i;
	cin >> i;
	for (int k = 0; k < i; k++) {
		int y, x;
		cin >> y >> x;
		map[y][x] = true;

		v.push_back(pii(x, y));
	}
	int MAX = 0;
	for (int k = 0; k < v.size(); k++) {
		if (!visited[v[k].second][v[k].first]) MAX = max(MAX,bfs(v[k]));
	}
	cout << MAX;
}