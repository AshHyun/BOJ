#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

int V;
int E;
vector<int> adj[101];
bool visited[101];
int ctr = 0;

int main() {
	cin >> V >> E;
	for (int k = 0; k < E; k++) {
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
		adj[to].push_back(from);
	}
	
	queue<int> q;
	visited[1] = true;
	q.push(1);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int k = 0; k < adj[cur].size(); k++) {
			int next = adj[cur][k];
			if (!visited[next]) {
				visited[next] = true;
				ctr++;
				q.push(next);
			}
		}
	}
	cout << ctr;
}#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector<int> arr;
vector<int> lis;

int main() {
	cin >> N;
	for (int k = 0; k < N; k++) {
		int input;
		cin >> input;
		arr.push_back(input);
	}
	lis.push_back(0);

	for (int k = 0; k < N; k++) {
		if (lis[lis.size() - 1] < arr[k]) lis.push_back(arr[k]);
		else {
			*lower_bound(lis.begin(), lis.end(), arr[k]) = arr[k];
		}
	}
	cout << N - lis.size() + 1;
}