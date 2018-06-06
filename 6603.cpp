#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <tuple>
#include <utility>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


typedef tuple<int, int, int> t3;
typedef long long ll;
typedef double db;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

vector<int> route;
vector<int> arr;
vector<bool> visited;
int N;

void backtrack(int here) {
	visited[here] = true;
	route.push_back(arr[here]);

	if (route.size() == 6) {
		for (int k = 0; k < route.size(); k++) {
			cout << route[k] << " ";
		}
		cout << endl;
	}
	for (int k = here + 1; k < N; k++) 
		if (!visited[k]) backtrack(k);
	
	visited[here] = false;
	route.pop_back();
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (1) {
		cin >> N;
		if (N == 0) break;

		arr.resize(N);
		visited.resize(N);

		for (int k = 0; k < N; k++) {
			cin >> arr[k];
		}
		for (int k = 0; k < N - 5; k++) {
			backtrack(k);
		}
		cout << endl;
	}
}
