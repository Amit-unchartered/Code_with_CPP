#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int d = abs(a-b);
        cout << (d/5 + d%5/2) << endl;
    }
    return 0;
}