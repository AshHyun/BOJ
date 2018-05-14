#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

static int V;
static bool *visited;
static vector<int> *adjl;
static int *result;

void bfs(int v);
int main() {
	cin >> V;
	adjl = new vector<int>[V + 1];
	visited = new bool[V + 1];
	result = new int[V + 1];
	for (int k = 1; k < V + 1; k++) {
		result[k] = 0;
		visited[k] = false;
	}

	int start, end;
	cin >> start >> end;
	int rel;
	cin >> rel;
	for (int k = 0; k < rel; k++) {
		int a, b;
		cin >> a >> b;
		adjl[a].push_back(b);
		adjl[b].push_back(a);
	}

	bfs(start);
	if(result[end]) cout << result[end];
	else cout << -1;
}
void bfs(int v) {
	queue<int> q;
	q.push(v);
	visited[v] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int k : adjl[cur]) {
			//cout << k << endl;
			//cout << "for" << endl;
			//cout << visited[k] << endl;
			if (!visited[k]) {
				//cout << "inif";
				q.push(k);
				visited[k] = true;
				result[k] = result[cur] + 1;
				//cout << "k: " << result[k];
			}
		}
	}
}
