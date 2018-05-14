#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	string s;
	cin >> s;
	for (int k = 0; k < 3; k++) {
		if (s[k] == 'A') cout << arr[0] << " ";
		else if (s[k] == 'B') cout << arr[1] << " ";
		else if (s[k] == 'C') cout << arr[2] << " ";
	}
}

