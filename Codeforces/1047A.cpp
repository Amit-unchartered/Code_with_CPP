#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n; cin >> n;

    ll x1 = 1, x2 = 1, x3 = n-(x1+x2);

    if((n-2)%3 != 0){
        cout << "1" << "1" << (n-2) << endl;
    }else{
        cout << "1" << "2" << (n-3) << endl;
    }

    
    return 0;
}