#include <iostream>
using namespace std;

int N, S, val[20];
int ctr, currentSum;

void dfs(int cur) {
	if (cur == N) return;

	if (currentSum + val[cur] == S) ctr++;

	dfs(cur + 1);

	currentSum += val[cur];
	dfs(cur + 1);

	currentSum -= val[cur];
}

int main() {
	cin >> N >> S;
	for (int i = 0; i < N; i++)
		cin >> val[i];
	dfs(0);
	cout << ctr;
}