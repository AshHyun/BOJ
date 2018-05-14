#include<iostream>
#include<algorithm>
int main() {
	int* arr;
	int erase(2), n, limit;
	int count(0);
	std::cin >> n;
	arr = new int[n];

	for (int k = 0; k < n; k++) {
		std::cin >> arr[k];
	}
	limit = arr[0];
	for (int j = 0; j < n; j++) {
		limit = std::max(limit, arr[j]);
	}
	if (limit == 1) limit = 2;
	while (erase <= limit) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == erase || arr[i] == 0) continue;
			if (arr[i] % erase == 0 || arr[i] == 1) arr[i] = 0;
		}
		erase++;
	}
	for (int a = 0; a < n; a++) {
		if (arr[a] != 0) { 
			count++; 
		}
	}
	delete[] arr;
	printf("%d", count);
}