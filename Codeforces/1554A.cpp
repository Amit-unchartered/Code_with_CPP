#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;

while(t--){
    int n;
    cin >> n;
    vector<int> v(n);

    //taking in
    for(auto &(it) : v) {
        cin >> it;
    }
    int maxi, mini; 
    int ans;
   
        for(int j = 0; j < n; j++) {
            maxi = *max_element(v.begin()+j, v.end()-n+j+1);
            mini = *min_element(v.begin()+j, v.end()-n+j+1);
            
            ans = maxi*mini;
        }
        cout << ans << endl;
    }
    

}
