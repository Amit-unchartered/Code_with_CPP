#include <iostream>
using namespace std;

int main(){

    int n; 
    cin >> n;

    int i = 1;
    int p = 1;
    //we initialised p one time now the next p value will be p++
    while(i <= n){

        int j=1;
       
        while (j <= i)
        {
            cout << p;
            p++;
            j++;
        }
        cout << endl;
        i++;
    }
}
//have clarity before writing code, don't use hit and trial