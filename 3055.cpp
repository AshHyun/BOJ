#include<iostream>
#include<string>
#include<utility>
#include<queue>
#include<vector>

using namespace std;
typedef pair<int, int> p;

queue<p> bpos;
queue<p> wpos;
vector<p> water;
bool** wvisited;
bool** bvisited;
char** map;
int** result;
int R, C;
static int dx[4] = {1,0,-1,0 };
static int dy[4] = {0,1,0,-1 };

bool wbfs() {
	bool ex = false;
	int rep = wpos.size();
	p cur;
	for (int k = 0; k < rep; k++) {
		ex = true;
		cur = wpos.front();
		wpos.pop();
		int copyx = cur.first;
		int copyy = cur.second;

		for (int a = 0; a < 4; a++) {
			int x = copyx + dx[a];
			int y = copyy + dy[a];

			if (!(x >= 0 && x < C && y >= 0 && y < R)) continue;

		//	cout << " cur : " << x << " " << y << endl;
			if (!wvisited[y][x] && map[y][x] == '.') {
				wvisited[y][x] = true;
				wpos.push(p(x, y));
			}
		}
	}
	return ex;
}

bool bbfs() {
	bool ex = false;
	int rep = bpos.size();
	p cur;
	for (int k = 0; k < rep; k++) {
		ex = true;
		cur = bpos.front();
		bpos.pop();
		int copyx = cur.first;
		int copyy = cur.second;

		for (int a = 0; a < 4; a++) {
			int x = copyx + dx[a];
			int y = copyy + dy[a];

			if (!(x >= 0 && x < C && y >= 0 && y < R)) continue;

			if (map[y][x] == 'D') {
				result[y][x] = result[copyy][copyx] + 1;
				return false;
			}
			if (!wvisited[y][x] && !bvisited[y][x] && map[y][x] == '.') {
				bvisited[y][x] = true;
				result[y][x] = result[copyy][copyx] + 1;
				bpos.push(p(x, y));
			}
		}
	}
	return ex;
}

int main() {
	p start;
	p end;

	//input, init
	cin >> R >> C;
	map = new char*[R];
	result = new int*[R];
	wvisited = new bool*[R];
	bvisited = new bool*[R];

	for (int k = 0; k < R; k++) {
		map[k] = new char[C];
		result[k] = new int[C];
		wvisited[k] = new bool[C];
		bvisited[k] = new bool[C];
	}
	string input;
	for (int y = 0; y < R; y++) {
		cin >> input;
		for (int x = 0; x < C; x++) {
			map[y][x] = input[x];

			if (input[x] == 'S') {
				start = p(x, y);
			}
			else if (input[x] == 'D') {
				end = p(x, y);
			}
			else if (input[x] == '*') {
				water.push_back(p(x, y));
			}
			result[y][x] = 0;
			wvisited[y][x] = false;
			bvisited[y][x] = false;
		}
	}

	bpos.push(start);
	for (int k = 0; k < water.size(); k++) {
		wpos.push(water[k]);
	}
	while (1) {
		wbfs();
		bool flag = bbfs();
		if (!flag) break;
	}
	if (result[end.second][end.first]) cout << result[end.second][end.first];
	else cout << "KAKTUS";

	//for (int y = 0; y < R; y++) {
	//	for (int x = 0; x < C; x++) {
	//		cout << " " << result[y][x] << " ";
	//	}
	//	cout << endl;
	//}
}