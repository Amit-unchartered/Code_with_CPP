#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    //In for loop we don't need to increament or decrement, as we have already
    //done it
    for (i = 1; i < n; i++) {

        if (i == 7) {
            continue;
        }
        cout << i << '\n';
        
    }
}