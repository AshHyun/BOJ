#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

bool iscut[10001];
int discovered[10001];
vector<int> adj[10001];
int counter = 1;
int V, E;
vector<int> cutver;


int findcut(int here, bool isroot) {
	discovered[here] = counter++;
	int ret = discovered[here];
	int children = 0;
	for (int k = 0; k < adj[here].size(); k++) {
		int there = adj[here][k];
		if (discovered[there] == 0) {
			children++;
			int low = findcut(there, false);
			if (!isroot && low >= discovered[here]) {
				iscut[here] = true;
			}
			ret = min(low, ret);
		}
		else ret = min(ret, discovered[there]);
	}
	if (isroot && children >= 2) {
		iscut[here] = true;
	}
	return ret;
}

int main() {
	cin >> V >> E;
	for (int k = 0; k < E; k++) {
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
		adj[to].push_back(from);
	}

	for (int k = 1; k <= V; k++) {
		if (discovered[k] == 0) findcut(k, true);
	}
	
	for (int k = 1; k <= V; k++) {
		if (iscut[k]) cutver.push_back(k);
	}

	cout << cutver.size() << endl;
	sort(cutver.begin(), cutver.end());
	for (int k = 0; k < cutver.size(); k++) {
		cout << cutver[k] << " ";
	}

}
