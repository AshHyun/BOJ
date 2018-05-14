#include<iostream>
#include<string>
using namespace std;

int main() {
	string line;
	cin >> line;
	int ctr(0), size(line.size());
	int ind = 0;
	while (ind < size) {
		if (line[ind] == 'c') {
			if (line[ind + 1] == '=' || line[ind + 1] == '-') {
				ind += 2;
				ctr++;
				continue;
			}
			else {
				ind++;
				ctr++;
				continue;
			}
		}
		else if (line[ind] == 'l') {
			if (line[ind + 1] == 'j') {
				ind += 2;
				ctr++;
				continue;
			}
			else {
				ind++;
				ctr++;
				continue;
			}
		}
		else if (line[ind] == 's') {
			if (line[ind + 1] == '=') {
				ind += 2;
				ctr++;
				continue;
			}
			else {
				ind++;
				ctr++;
				continue;
			}
		}
		else if (line[ind] == 'z') {
			if (line[ind + 1] == '=') {
				ind += 2;
				ctr++;
				continue;
			}
			else {
				ind++;
				ctr++;
				continue;
			}
		}
		else if (line[ind] == 'n') {
			if (line[ind + 1] == 'j') {
				ind += 2;
				ctr++;
				continue;
			}
			else {
				ind++;
				ctr++;
				continue;
			}
		}
		else if (line[ind] == 'd') {
			if (line[ind+1] == 'z') {
				if (ind + 2 < size){
					if (line[ind + 2] == '=') {
						ind += 3;
						ctr++;
						continue;
					}
					else {
						ind += 2;
						ctr += 2;
						continue;
					}
				}
				else {
					ctr += 2;
					break;
				}
			}
			else if (line[ind+1] == '-'){
				ind += 2;
				ctr++;
				continue;
			}
			else {
				ind++;
				ctr++;
				continue;
			}
		}
		else {
			ind++;
			ctr++;
		}
	}
	cout << ctr;
	return 0;
}