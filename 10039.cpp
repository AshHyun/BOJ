#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,e;
    int average;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    
    if (a < 40){
    	a = 40;
	}
	if (b < 40){
    	b = 40;
	}
	if (c < 40){
    	c = 40;
	}
	if (d < 40){
    	d = 40;
	}
	if (e < 40){
    	e = 40;
	}
    average = (a + b + c + d + e)/5;
    cout << average;
    return 0;
}