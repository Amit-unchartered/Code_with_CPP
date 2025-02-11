#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    //int t; cin >> t;
    ll n; cin >> n;
    
    while(n!=1){
        cout << n << " " ;
        if(n&1ll){
            n = n*3+1;
        }else{
            n/=2; 
        }
    }
    cout << 1;
}

int main()
{
    solve();

    return 0;
}