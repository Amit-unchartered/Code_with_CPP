#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int last = a[n-1];
        int maxi = *max_element(a.begin(), a.end()-1);

        int ans = last + maxi;
    cout << ans << endl;
    }

    return 0;
}