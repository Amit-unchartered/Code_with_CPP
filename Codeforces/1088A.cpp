#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    if(x <=5 || x%2 != 0){
        cout << "-1" << endl;
    }else{
        cout << (x-2) << " " << "2" << endl;
    }
    return 0;
}