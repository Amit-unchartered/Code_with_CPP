#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ABCDEFG";

    int t; cin >> t;

    while(t--){
        int m, n;
        cin >> n >> m;

        string a; cin >> a;

        unordered_map<char, int> mpp;

        for(int i=0 ;i<n ; i++){
            mpp[a[i]]++;
        }

        for(int i=0; i<s.length(); i++){
            if(mpp.find(s[i]) == mpp.end()){
                mpp[s[i]] = 0;
            }
        }

        int cnt=0;
        for(auto it:mpp){
            if(it.second < m){
                cnt += m-it.second;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}