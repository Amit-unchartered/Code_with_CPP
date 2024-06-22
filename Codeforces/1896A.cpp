#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(!is_sorted(a.begin(), a.end()) && a[0]!=1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}