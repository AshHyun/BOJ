#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int jump[1000];
int map[1000];
bool visited[1000];

int main() {
	int N;
	cin >> N;
	for (int k = 0; k < N; k++) {
		cin >> map[k];
	}
	if (N == 1) {
		cout << 0;
		return 0;
	}
	queue<int> q;
	q.push(0);
	visited[0] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int dx = 1; dx <= map[cur]; dx++) {
			int x = cur + dx;

			if (visited[x] || !(x < N)) continue;

			jump[x] = jump[cur] + 1;
			q.push(x);
			visited[x] = true;
		}
	}
	if (jump[N - 1]) cout << jump[N - 1];
	else cout << -1;
}