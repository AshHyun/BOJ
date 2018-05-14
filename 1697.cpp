#include<iostream>
#include<queue>
using namespace std;

bool visited[100001];
int dis[100001];

int main() {
	int N, K;
	cin >> N >> K;

	queue<int> q;
	q.push(N);
	visited[N] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur == K) break;

		int x = cur * 2;
		if ((x >= 0 && x <= 100000) && !visited[x]){
			q.push(x);
			visited[x] = true;
			dis[x] = dis[cur] + 1;
		}

		x = cur + 1;
		if ((x >= 0 && x <= 100000) && !visited[x]) {
			q.push(x);
			visited[x] = true;
			dis[x] = dis[cur] + 1;
		}

		x = cur - 1;
		if ((x >= 0 && x <= 100000) && !visited[x]) {
			q.push(x);
			visited[x] = true;
			dis[x] = dis[cur] + 1;
		}
	}

	cout << dis[K];
}