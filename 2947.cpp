#include<iostream>

int arr[5];

const void swap(int a, int b) {
	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}

int main() {
	bool sort = false;
	for (int k = 0; k < 5; k++) {
		std::cin >> arr[k];
	}
	while (!sort) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] < arr[i + 1]) continue;
			else {
				swap(i, i + 1);
			}
		}
		if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3] && arr[3] < arr[4])
			sort = true;
	}

}