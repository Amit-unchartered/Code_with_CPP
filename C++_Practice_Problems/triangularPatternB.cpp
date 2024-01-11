#include <iostream>
using namespace std;

int main(){

    int n; 
    cin >> n;

    int i = 1;
    while(i <= n){

        int j=1;
        int p=i;
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