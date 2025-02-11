#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> num(n,0);
    map<int,int> mpp;
    for(int i=0; i<n; i++){
        cin >> num[i]; mpp[num[i]]++;        
    }

    for(auto x:mpp){
        if(((x.first+1)-x.first)==1){
            cout << x.first+1;
        }
    }
}

int main()
{
    solve();
    return 0;
}