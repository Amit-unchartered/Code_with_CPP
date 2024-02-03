#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,f,a,b;
    cin >> n >> f >> a >> b;
    
    vector<int> c(n);for(int i=0;i<n;i++){cin >> c[i];}

    int last = 0;
    for(int i=0; i<n; i++) {
        ll phoneON = 1LL*a*(c[i]-last);
        ll phoneOFFandON = b;
        ll required = min(phoneOFFandON, phoneON);

        f -= required;
        last = c[i];

        if(f <= 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
} 

int main(){
    int t ;
    cin >> t;

    while(t--){
        solve();
    }
}