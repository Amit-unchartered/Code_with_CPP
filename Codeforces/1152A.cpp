#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n; ll m;
    cin >> n; cin >> m;
    ll a[n];
    for(ll i = 0; i < n; i++){
    cin >> a[i];
    }
    
    ll b[m];
    for(ll i = 0; i < m; i++){
    cin >> b[i];
    }
    
    int odd1=0; int even1=0;
    int odd2=0; int even2=0;
    ll cnt = 0;
    for(ll i=0; i < n; i++) {
        if(a[i]%2 == 0){
            even1++;
        }else if(a[i]%2 == 1){
            odd1++;
        }
    }
    
    for(ll i=0; i < m; i++) {
        if(b[i]%2 == 0){
            even2++;
        }else if(b[i]%2 == 1){
            odd2++;
        }
    }
    
    cout << min(even1,odd2)+min(odd1,even2) << endl;
}
    
