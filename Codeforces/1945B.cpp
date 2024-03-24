#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,m;
    cin >> a >> b >> m;
    
    long long ans = (m/a)+1 + (m/b)+1;
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}