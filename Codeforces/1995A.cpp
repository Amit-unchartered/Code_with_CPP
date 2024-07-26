#include<bits/stdc++.h>
#define ll long long

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

        int x=0; sort(a.begin(), a.end());
        int y=a[n-1];

        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        if(mpp[y]%2==1){
            cout << "YES" << endl;
        }
        else{
            bool flag = false;
            for(auto &i:mpp){
                if(i.second%2==1){
                    flag=1;
                }
            }
            if(flag){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}