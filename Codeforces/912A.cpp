#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;

        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        if(k==1 && !is_sorted(a.begin(), a.end())){
            cout << "no" << endl;
        }else{
            cout << "yes" << endl;
        }
    }
    return 0;
}