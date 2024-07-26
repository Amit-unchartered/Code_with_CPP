#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1; cin >> t;
    while(t--){
        string s1, s2; cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        int res = m;

        for(int i=0; i<m; i++){
            int curr = i, k = i;
            for(int j=0; j<n; j++)
                if(s1[j]==s2[k]){
                    k++;
                    if(k==m)
                    break;
                }
            res = min(res, curr+m-k);
        }
            cout << res+n << endl;
    }
    return 0;
}