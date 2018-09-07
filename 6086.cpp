#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#define INF 987654321
using namespace std;

int c[52][52];
int f[52][52];
vector<int> adj[52];

int ctoi(char x) {
	if (x >= 'a') return x - 'a' + 26;
	else return x - 'A';
}

int main() {
	int N;
	int result = 0;
	cin >> N;
	for (int k = 0; k < N; k++) {
		char from, to;
		int capacity;
		cin >> from >> to >> capacity;
		c[ctoi(from)][ctoi(to)] += capacity;
		c[ctoi(to)][ctoi(from)] += capacity;
		adj[ctoi(from)].push_back(ctoi(to));
		adj[ctoi(to)].push_back(ctoi(from));
	}
	int source = 'A' - 'A';
	int sink = 'Z' - 'A';
	while (1) {
		vector<int> prev(52, -1);
		queue<int> q;
		q.push(source);
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int k = 0; k < adj[cur].size(); k++) {
				int to = adj[cur][k];
				if (prev[to] != -1) continue;
				if (c[cur][to] - f[cur][to] <= 0) continue;

				q.push(to);
				prev[to] = cur;
				if (to == sink) break;
			}
		}
		if (prev[sink] == -1) break;

		int maxflow = INF;
		for (int v = sink; v != source; v = prev[v]) {
			maxflow = min(c[prev[v]][v] - f[prev[v]][v], maxflow);
		}
		for (int v = sink; v != source; v = prev[v]) {
			f[prev[v]][v] += maxflow;
			f[v][prev[v]] -= maxflow;
		}
		result += maxflow;
	}
	cout << result;
}