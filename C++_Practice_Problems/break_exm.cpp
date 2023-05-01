#include <iostream>
using namespace std;

int main(){
    int i =1;
    //printing numbers till 4
    while ( i < 10 ) {
        cout << i << endl;

        if ( i == 4 ) {
            break;
        }
        i++;
    }
}