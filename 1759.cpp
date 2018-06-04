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

int L, C;
string curtrack = "";
bool visited[15];
char arr[15];
int vowel = 0;
int consonant = 0;

bool isvowel(char a) {
	return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}

void backtrack(int cur) {
	curtrack = curtrack + arr[cur];
	visited[cur] = true;
	if (isvowel(arr[cur])) vowel++;
	else consonant++;

	if (curtrack.size() == L && vowel >= 1 && consonant >= 2) {
		cout << curtrack << endl;
		visited[cur] = false;
		curtrack.erase(curtrack.length() - 1);
		if (isvowel(arr[cur])) vowel--;
		else consonant--;
	}
	else {
		for (int k = cur; k < C; k++) {
			if (!visited[k]) backtrack(k);
		}
		visited[cur] = false;
		curtrack.erase(curtrack.length() - 1);
		if (isvowel(arr[cur])) vowel--;
		else consonant--;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> L >> C;

	for (int k = 0; k < C; k++) {
		cin >> arr[k];
	}
	sort(arr, arr + C);
	for (int k = 0; k < C; k++) {
		backtrack(k);
	}
}
