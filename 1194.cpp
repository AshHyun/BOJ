#include<iostream>
#include<utility>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<cmath>
using namespace std;
#define INF (99999999)
typedef pair<int, int> pii;
typedef pair<pii, int> p;

int N, M;

char map[50][50];
bool visited[50][50][64];
int dis[50][50][64];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };

pii st;
vector<pii> en;
vector <int> ret;

vector <int>& tobinary(int x) {
	ret.clear();

	for (int k = 0; k < 6; k++) {
		int binary = x % 2;
		ret.push_back(binary);
		x /= 2;
	}
	reverse(ret.begin(), ret.end());	

	return ret;
}

int todecimal(vector<int> keys) {
	int ret = 0;
	for (int k = 0; k < 6; k--) {
		if (keys[5 - k] == 1) ret += 1 << k;
	}
	return ret;
}

void visit(int x, int y, int keys) {
	visited[y][x][keys] = true;
//	cout << "visited " << y << " " << x << " with " << keys << " keys" << endl;
}
int main() {

	cin >> N >> M;

	//input
	for (int y = 0; y < N; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < M; x++) {
			map[y][x] = s[x];

			//remember start, end
			if (s[x] == '0') {
				st = pii(x, y);
			}
			if (s[x] == '1') {
				en.push_back(pii(x, y));
			}
		}
	}

	//bfs
	queue<p> q;
	q.push(p(pii(st.first, st.second), 0));
	visit(st.first, st.second, 0);

	while (!q.empty()) {
		pii cur = q.front().first;
		int keys = q.front().second;
		q.pop();

		vector<int> keystat = tobinary(keys);

	//	cout << "keystat : ";
	//	for (int k = 0; k < 6; k++) {
	//		cout << keystat[k] << " ";
	//	}
	//	cout << endl;
		int curx = cur.first;
		int cury = cur.second;

	//	cout << "now searching from " << cury << " " << curx << endl;
	//	cout << endl;

		for (int k = 0; k < 4; k++) {
			int x = curx + dx[k];
			int y = cury + dy[k];

			if (!(x >= 0 && x < M && y >= 0 && y < N) || visited[y][x][keys]) continue;
	
			//key 먹을때
			if (map[y][x] >= 97 && map[y][x] <= 102) {
				int which = map[y][x];

				//which 0,1,2,3,4,5 -> a,b,c,d,e,f
				which -= 97;


				if (keystat[which] == 0) {
					q.push(p(pii(x, y), keys + (int)pow(2,5-which)));
					visit(x, y, keys + (int)pow(2, 5 - which));
					dis[y][x][keys + (int)pow(2, 5 - which)] = dis[cury][curx][keys] + 1;
				}
				else {
					q.push(p(pii(x, y), keys));
					visit(x, y, keys);
					dis[y][x][keys] = dis[cury][curx][keys] + 1;
				}
				continue;
			}

			//문에 도달했을때
			if (map[y][x] >= 65 && map[y][x] <= 70) {
				int which = map[y][x];

				//which 0,1,2,3,4,5 -> A,B,C,D,E,F
				which -= 65;

				// 열쇠없음
				if (keystat[which] == 0) continue;
				else {
					q.push(p(pii(x, y), keys));
					visit(x, y, keys);
					dis[y][x][keys] = dis[cury][curx][keys] + 1;
				}
				continue;
			}

			//그냥 공간
			if (map[y][x] == '.') {
				q.push(p(pii(x, y), keys));
				visited[y][x][keys] = true;
				dis[y][x][keys] = dis[cury][curx][keys] + 1;
				continue;
			}

			if (map[y][x] == '0') {
				q.push(p(pii(x, y), keys));
				visit(x, y, keys);
				dis[y][x][keys] = dis[cury][curx][keys] + 1;
				continue;
			}

			if (map[y][x] == '1') {
				q.push(p(pii(x, y), keys));
				visit(x, y, keys);
				dis[y][x][keys] = dis[cury][curx][keys] + 1;
				continue;
			}
		}
	}
	//end bfs
	int MIN = INF;
	for (int k = 0; k < en.size(); k++) {
		for (int rep = 0; rep < 64; rep++) {
			if (dis[en[k].second][en[k].first][rep] == 0) continue;
			MIN = min(MIN, dis[en[k].second][en[k].first][rep]);
		}	
	}
	if(MIN != 0 && MIN != INF) cout << MIN;
	else cout << -1;
	
}