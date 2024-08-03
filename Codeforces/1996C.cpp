#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;

        string a, b; cin >> a >> b;

        vector<vector<int>> prefixa(n+1, vector<int>(26,0));
        vector<vector<int>> prefixb(n+1, vector<int>(26,0));

        for(int i=1; i<=n; i++){
            for(int j=0; j<26; j++){
                prefixa[i][j] = prefixa[i-1][j];
                prefixb[i][j] = prefixb[i-1][j];
            }

            prefixa[i][a[i-1]-'a']++;
            prefixb[i][b[i-1]-'a']++;
        }
        while(q--){
            int l,r; cin >> l >> r;

            int opr = 0;

            for(int j=0; j<26; j++){
                int cnta = prefixa[r][j] - prefixa[l-1][j];
                int cntb = prefixb[r][j] - prefixb[l-1][j];

                opr += abs(cnta - cntb);
            }

            cout << opr/2 << endl;
        }
    }
    return 0;
}