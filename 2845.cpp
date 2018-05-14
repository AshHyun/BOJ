#include<iostream>
using namespace std;

int main() {
	int ppl_area;
	int area;
	int ppl;
	int a,b,c,d,e;
	
	
	cin >> ppl_area >> area;
	cin >> a >> b >> c >> d >> e;

	ppl = ppl_area * area;
	cout << a - ppl<< ' ' << b - ppl <<' ' <<c - ppl <<' ' <<d - ppl <<' ' <<e - ppl;
	return 0;
}