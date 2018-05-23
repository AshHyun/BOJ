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



int N, M;


int main() {
	while (1) {
		cin >> N >> M;
		int adjm[500][500];
		int dis[500];

		fill(dis, dis + N, INF);
		for (int k = 0; k < N; k++) {
			fill(adjm[k], adjm[k] + N, 0);
		}


		if (N == 0 && M == 0) return 0;

		int S, D;
		cin >> S >> D;

		for (int k = 0; k < M; k++) {
			int u, v, p;
			cin >> u >> v >> p;
			adjm[u][v] = p;
		}
		

		dis[S] = 0;
		priority_queue<pii, vector<pii>, greater<pii>> pq;
		pq.push(pii(0, S));

		while (!pq.empty()) {
			pii cur = pq.top();
			pq.pop();

			int dist = cur.first;
			int here = cur.second;


			if (dist > dis[here]) continue;

			for (int k = 0; k < N; k++) {
				if (adjm[here][k] && dis[k] > dist + adjm[here][k]) {
					dis[k] = dist + adjm[here][k];
					pq.push(pii(dis[k], k));
				}
			}
		}

		queue<pii> q;
		q.push(pii(D, dis[D]));
		while (!q.empty()) {
			pii cur = q.front();
			q.pop();

			int dist = cur.second;
			int pos = cur.first;

			for (int k = 0; k < N; k++) {
				if (adjm[k][pos] && dist == adjm[k][pos] + dis[k]) {
					q.push(pii(k, dis[k]));
					adjm[k][pos] = 0;
				}
			}
		}

		fill(dis, dis + N, INF);
		dis[S] = 0;
		pq.push(pii(0, S));

		while (!pq.empty()) {
			pii cur = pq.top();
			pq.pop();

			int dist = cur.first;
			int here = cur.second;


			if (dist > dis[here]) continue;

			for (int k = 0; k < N; k++) {
				if (adjm[here][k] && dis[k] > dist + adjm[here][k]) {
					dis[k] = dist + adjm[here][k];
					pq.push(pii(dis[k], k));
				}
			}
		}
		if (dis[D] == INF) cout << -1 << endl;
		else cout << dis[D] << endl;
	}
}