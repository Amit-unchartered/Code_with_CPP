#include<bits/stdc++.h>
using namespace std;

bool sol(int val, vector<int>v, int k){
    for(int i=0; i<v.size(); i++){
        int diff = val-v[i];
        int ans = diff/k;
        if(ans%2==1) return false;
        if(val>=v[i]+ans*k&&val<=v[i]+(ans+1)*k){
            continue;
        }else return 0;
    }
    return true;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        bool m=0;
        for(int i=a[n-1]; i<=a[n-1]+k; i++){
            bool flag = sol(i,a,k);
            if(flag){
                cout << i << endl;
                m=1;
                break;
            }
        }
        if(!m){
            cout << -1 << endl;
        }
    }
    return 0;
}