#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool divided = false;
    for( int d = 2; d < n; d++ ){
        if ( n % d == 0 ) {
            divided = true;
        }
    }
    if (divided) {
        cout << "not prime" << endl;
    }else{
        cout << "prime" << endl;
    }
}