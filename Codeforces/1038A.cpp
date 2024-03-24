#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int f[26];

int main()
{
    IOS;
    int n,k;
    string s;
    cin >> n >> k >> s;
    for(auto &it:s){
        f[it-'A']++;
    }
    int ans = f[0];
    for(int i=1; i<k; i++) {
        ans = min(ans, f[i]);
    }
    cout << ans*k << endl;
    return 0;
}