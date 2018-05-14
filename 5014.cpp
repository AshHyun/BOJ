#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int F, S, G, U, D;
vector<bool> visited;
queue<int> q;
vector<int> ctr;

int dx[2];


void visit(int v) {
	visited[v] = true;
//	cout << "visited " << v << endl;
}



void bfs(int v) {
	q.push(v);
	visit(v);
	while (!q.empty()) {
		int copy = q.front();
		q.pop();
		for (int i = 0; i < 2; i++) {
			int cur = copy + dx[i];
			if (!(cur >= 0 && cur <= F)) {
				continue;
			}
			if (!visited[cur]) {
				visit(cur);
				q.push(cur);
				ctr[cur] = ctr[copy] + 1;
			}
		}
	}
}

int main() {

	cin >> F >> S >> G >> U >> D;
	visited = vector<bool>(F + 1, false);
	ctr = vector<int>(F + 1, 0);
	dx[0] = U;
	dx[1] = -D;

	if (S == G) {
		cout << 0;
		return 0;
	}

	bfs(S);
	if(ctr[G]) cout << ctr[G];
	else cout << "use the stairs";
}
