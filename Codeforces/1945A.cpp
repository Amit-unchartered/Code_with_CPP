#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    long long ans = a;
    ans += b/3;
    b %= 3;
        
    if(b>0 && 3-b>c){
        cout << -1 << endl;
        return;
    }

    if(b > 0){
        ans++;
        c -= 3-b;
    }
    b = 0;

    ans += (c+2)/3;
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}