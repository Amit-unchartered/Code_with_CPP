#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s, f;
    cin >> s >> f;
    int remove =0, add = 0;

    for(int i =0; i <n ;i++){
        if(s[i] == '1' && f[i] == '0'){
            remove++;
        }else if (s[i] == '0' && f[i] == '1'){
            add++;
        }
    }

    int ans = max(add, remove);
    cout << ans << endl;
}

int main(){
    int t ;
    cin >> t;

    while(t--){
        solve();
    }
}