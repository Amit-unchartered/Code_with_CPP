#include <iostream>
using namespace std;

int main(){
    int x, dig, rev = 0;
    cin >> x;

    while(x != 0){
        dig = (x % 10);
        rev = rev*10 + dig;//43 = 4*10 + 3, 432 = 43*10 + 2
        x = (x / 10); 
    }
    cout << rev << endl;
}