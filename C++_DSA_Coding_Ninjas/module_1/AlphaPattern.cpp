#include <iostream>
using namespace std;

int main(){


    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char starChar = 'A'+ i -1;
        while(j <= i){
            char c = starChar;
            cout << c;
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    
}