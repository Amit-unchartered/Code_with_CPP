#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;

while(t--){
    int s;
    cin >> s;
    float ans = sqrt(s);
    
    int p = round(ans);
    if(p < ans) cout << p + 1 << endl;
    else cout << p << endl;
 
} 
}

