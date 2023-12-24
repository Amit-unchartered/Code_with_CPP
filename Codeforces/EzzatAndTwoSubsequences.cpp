#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << fixed << setprecision(9);
    int t;
    cin >> t;


    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        long long sum = 0;
        
        
        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i = 0; i < n; i++) {
            sum += v[i];
        }
        int max = *max_element(v.begin(), v.end());
        cout << 1.0*(sum - max)/(n-1) + max << endl;
    }
}