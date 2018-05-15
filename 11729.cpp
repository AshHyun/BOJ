#include<iostream>
#include<queue>
#include<utility>
#include<cmath>
#pragma warning(disable: 4996)
using namespace std;
typedef pair<int, int> pii;


int ctr = 0;

void Hanoi(int n, int from, int to) {
	if (n <= 0) return;
	
	int aux = 6 - from - to;

	Hanoi(n - 1, from, aux);
	printf("%d %d\n", from, to);
	Hanoi(n - 1, aux, to);
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", (int)pow(2, n) - 1);
	Hanoi(n, 1, 3);
}