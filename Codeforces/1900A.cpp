#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        //int l = s.length();
        int cnt = 0;
        int ans = 0;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(s[i] == '.') cnt++;
            
            if(i>0 && i<n-1){
                if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                    cout << 2 << endl;
                    flag = false;
                    break;
                }
            }
        }
        //cout << min(ans,cnt) << endl;
        if(flag){
            cout << cnt << endl;
        }
    }
    return 0;
}