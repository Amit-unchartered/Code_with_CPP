#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        // Calculate the maximum possible Manhattan value
        ll maxValue = n * (n - 1) / 2;
        
        // If k is greater than the maximum possible value, print "No"
        if (k > maxValue) {
            cout << "No" << endl;
            continue;
        }
        
        // Initialize the permutation with the identity permutation
        vector<int> p(n);
        iota(p.begin(), p.end(), 1);
        
        // Adjust the permutation to achieve the desired Manhattan value
        // Start from the beginning and swap elements to increase the Manhattan value
        for (int i = 0; i < n - 1; ++i) {
            // Calculate the maximum value we can add at position i
            int maxAddValue = n - 1 - i;
            
            // If we can achieve the remaining required Manhattan value with maxAddValue
            if (k <= maxAddValue) {
                swap(p[i], p[i + k]);
                break;
            }
            
            // Otherwise, increase the current Manhattan value by maxAddValue
            k -= maxAddValue;
            swap(p[i], p[i + maxAddValue]);
        }
        
        // After adjusting, check if the Manhattan value is exactly k
        ll currentManhattan = 0;
        for (int i = 0; i < n; ++i) {
            currentManhattan += abs(p[i] - (i + 1));
        }
        
        if (currentManhattan == maxValue) {
            cout << "Yes" << endl;
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
