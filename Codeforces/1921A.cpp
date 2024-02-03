#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=4;
    vector<pair<int,int>> a(n);

    int mn = 1001;
    int mx = -1001;

    for(int i = 0; i<n; i++){
        cin >> a[i].first >> a[i].second;
        mn = min(mn, a[i].first);
        mx = max(mx, a[i].first);
    }
    cout << (mx-mn)*(mx-mn) << endl;
}

int main(){
    int t ;
    cin >> t;

    while(t--){
        solve();
    }
}