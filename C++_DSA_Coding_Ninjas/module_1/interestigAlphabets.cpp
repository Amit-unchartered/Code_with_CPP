#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        char startChar = 'A' + n - i;
        while(j <= i){

            char c = startChar + j - 1;
            cout << c;
            j++;


        }
        cout << endl;
        i++;
    }
}