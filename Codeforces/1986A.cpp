#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int x1, x2, x3; cin >> x1 >> x2 >> x3;

        int ans = INT_MAX;
        int f = abs(x2-x1) + abs(x3-x1);
        ans = min(f, ans);
       // cout << ans <<endl;
    
        int s = abs(x1-x2) + abs(x3-x2);
        ans = min(s, ans);
       // cout << ans <<endl;

        int th = abs(x1-x3) + abs(x2-x3);
        ans = min(th, ans);

        cout << ans <<endl;
    }
    return 0;
}