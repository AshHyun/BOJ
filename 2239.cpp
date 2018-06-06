#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
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

int map[9][9];
vector<vector<int>> possible;
vector<pii> zeros;
int ctr = 0;
bool printed = false;

int findpart(int where) {
	int x = zeros[where].first;
	int y = zeros[where].second;

	if (x >= 6) {
		if (y >= 6) return 9;
		else if (y >= 3) return 6;
		else return 3;
	}
	else if (x >= 3) {
		if (y >= 6) return 8;
		else if (y >= 3) return 5;
		else return 2;
	}
	else {
		if (y >= 6) return 7;
		else if (y >= 3) return 4;
		else return 1;
	}
}

void check(int where) {
	bool found[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int x = zeros[where].first;
	int y = zeros[where].second;

	for (int k = 0; k < 9; k++) {
		found[map[y][k]] = true;
		found[map[k][x]] = true;
	}
	int part = findpart(where);
	switch (part) {
	case 1:
		for (int b = 0; b < 3; b++)
			for (int a = 0; a < 3; a++)
				found[map[b][a]] = true;
		break;
	case 2:
		for (int b = 0; b < 3; b++)
			for (int a = 3; a < 6; a++)
				found[map[b][a]] = true;
		break;
	case 3:
		for (int b = 0; b < 3; b++)
			for (int a = 6; a < 9; a++)
				found[map[b][a]] = true;
		break;
	case 4:
		for (int b = 3; b < 6; b++)
			for (int a = 0; a < 3; a++)
				found[map[b][a]] = true;
		break;
	case 5:
		for (int b = 3; b < 6; b++)
			for (int a = 3; a < 6; a++)
				found[map[b][a]] = true;
		break;
	case 6:
		for (int b = 3; b < 6; b++)
			for (int a = 6; a < 9; a++)
				found[map[b][a]] = true;
		break;
	case 7:
		for (int b = 6; b < 9; b++)
			for (int a = 0; a < 3; a++)
				found[map[b][a]] = true;
		break;
	case 8:
		for (int b = 6; b < 9; b++)
			for (int a = 3; a < 6; a++)
				found[map[b][a]] = true;
		break;
	case 9:
		for (int b = 6; b < 9; b++)
			for (int a = 6; a < 9; a++)
				found[map[b][a]] = true;
		break;
	}
	for (int k = 1; k < 10; k++) {
		if (!found[k]) possible[where].push_back(k);
	}
}

bool isvalid(int where) {

	int x = zeros[where].first;
	int y = zeros[where].second;
	bool found[10];
	int part = findpart(where);
	fill(found, found + 10, 0);
	switch (part) {
	case 1:
		for (int b = 0; b < 3; b++)
			for (int a = 0; a < 3; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 2:
		for (int b = 0; b < 3; b++)
			for (int a = 3; a < 6; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 3:
		for (int b = 0; b < 3; b++)
			for (int a = 6; a < 9; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 4:
		for (int b = 3; b < 6; b++)
			for (int a = 0; a < 3; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 5:
		for (int b = 3; b < 6; b++)
			for (int a = 3; a < 6; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 6:
		for (int b = 3; b < 6; b++)
			for (int a = 6; a < 9; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 7:
		for (int b = 6; b < 9; b++)
			for (int a = 0; a < 3; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 8:
		for (int b = 6; b < 9; b++)
			for (int a = 3; a < 6; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	case 9:
		for (int b = 6; b < 9; b++)
			for (int a = 6; a < 9; a++) {
				if (map[b][a] && found[map[b][a]]) return false;
				found[map[b][a]] = true;
			}
		break;
	}
	fill(found, found + 10, 0);
	for (int k = 0; k < 9; k++) {
		if (map[y][k] && found[map[y][k]]) return false;
		found[map[y][k]] = true;
	}
	fill(found, found + 10, 0);
	for (int k = 0; k < 9; k++) {
		if (map[k][x] && found[map[k][x]]) return false;
		found[map[k][x]] = true;
	}
	return true;
}

void backtrack(int v) {
	ctr++;
	int x = zeros[v].first;
	int y = zeros[v].second;

	for (int k = 0; k < possible[v].size(); k++) {
		map[y][x] = possible[v][k];

		if (!isvalid(v)) continue;

		else {
			if (ctr == zeros.size() && !printed) {
				for (int y = 0; y < 9; y++) {
					for (int x = 0; x < 9; x++) {
						cout << map[y][x];
					}
					cout << endl;
				}
				printed = true;
				return;
			}
		}
		if (printed) return;
		backtrack(v + 1);
	}
	map[y][x] = 0;
	ctr--;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	int ctr = 0;
	for (int y = 0; y < 9; y++) {
		string s;
		cin >> s;
		for (int x = 0; x < 9; x++) {
			map[y][x] = s[x] - '0';
			if (map[y][x] == 0) zeros.push_back(pii(x, y));
		}
	}
	possible.resize(zeros.size());
	for (int k = 0; k < zeros.size(); k++) check(k);
	backtrack(0);
}