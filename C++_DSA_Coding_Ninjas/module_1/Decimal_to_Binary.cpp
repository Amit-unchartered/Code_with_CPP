#include <iostream>
using namespace std;

int main(){
    int x, dig, rev = 0, pv = 1;
    cin >> x;

    while(x > 0){
        dig = (x % 2);
        rev = rev + dig*pv;
        pv *= 10;
        x = x/2;
    }
    cout << rev;
}