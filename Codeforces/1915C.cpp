#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPerfectSquare(ll x)
{
    if (x >= 0) {
 
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    
    return false;
}

int main()
{
    int t;cin >> t;
    while(t--){
        ll n;cin >> n;
        ll arr[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }

        int sum = 0;
        for(int i = 0; i< n; i++) {
            sum += arr[i];
        }

        if(isPerfectSquare(sum)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}