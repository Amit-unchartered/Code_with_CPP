#include <iostream>
using namespace std;

int main(){
    int x, decimal = 0, dig, t = 1;
    cin >> x;
    while( x > 0 ){
        dig = (x % 10);
        decimal = decimal + t*dig;
        t*=2;
        x = x/10;

    }
    cout << decimal;
}