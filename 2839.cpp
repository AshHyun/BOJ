#include<iostream>
using namespace std;

int main() {
    int weight, five, three = 0;
    cin >> weight;
    
    while (weight % 5 != 0){
        if (weight < 0){
            cout << "-1";
            return -1;
        }
        weight = weight - 3;
        three += 1;
    }
    five = weight / 5;
    cout << five + three;
    return 0;
}