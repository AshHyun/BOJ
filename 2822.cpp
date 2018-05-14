#include<algorithm>
#include<iostream>
using namespace std;

int search(const int original[], int which) {
	for (int k = 0; k < 8; k++) {
		if (original[k] == which) return k;
	}
}

int main() {
	int scoreset[8];
	int copy[8];
	int nums[5];
	int total;
	for (int k = 0; k < 8; k++) {
		cin >> scoreset[k];
		copy[k] = scoreset[k];
	}
	sort(scoreset, scoreset + 8);
	
	total = scoreset[7] + scoreset[6] + scoreset[5] + scoreset[4] + scoreset[3];
	for (int i = 0; i < 5; i++) {
		nums[i] = search(copy, scoreset[3 + i]);
	}
	sort(nums, nums + 5);
	printf("%d\n", total);
	printf("%d ", nums[0] + 1);
	printf("%d ", nums[1] + 1);
	printf("%d ", nums[2] + 1);
	printf("%d ", nums[3] + 1);
	printf("%d", nums[4] + 1);
}