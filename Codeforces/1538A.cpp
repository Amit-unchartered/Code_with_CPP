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

    int maxpos = max_element(v.begin(), v.end()) - v.begin();
    int minpos = min_element(v.begin(), v.end()) - v.begin();

    cout << min({
        max(maxpos,minpos) + 1,
        (n-1) - min(maxpos,minpos) + 1,
        maxpos + 1 + (n-1) - minpos + 1,
        minpos + 1 + (n-1) - maxpos + 1

    }) << endl;    

} 

}


