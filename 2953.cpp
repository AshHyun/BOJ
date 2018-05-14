#include<iostream>

using namespace std;

int sum() {
	int x, y, z, w;
	cin >> x >> y >> z >> w;
	return x + y + z + w;
}
int main() {
	int list[5], max, index;
	list[0] = sum();
	list[1] = sum();
	list[2] = sum();
	list[3] = sum();
	list[4] = sum();
	max = list[0];
	index = 0;
	for (int k = 0; k < 5; k++) {
		if (max < list[k]) {
			max = list[k];
			index = k;
		}
	}
	cout << index + 1 << " " << max;
}