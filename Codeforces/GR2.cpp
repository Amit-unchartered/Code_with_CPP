#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9 + 7;

bool canBeSumOfLargeNumbers(long long x, int depth = 0) {
    if (depth > 18) return false;
    
    for (int d1 = 5; d1 <= 9; ++d1) {
        for (int d2 = 5; d2 <= 9; ++d2) {
            if (x == d1 + d2) {
                return true;
            }
        }
    }
    
    if (x >= 10) {
        int lastDigit = x % 10;
        if (lastDigit >= 5 && lastDigit <= 9) {
            long long reducedX = x / 10;
            for (int d = 5; d <= 9; ++d) {
                if (canBeSumOfLargeNumbers(reducedX * 10 + d, depth + 1)) {
                    return true;
                }
            }
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x;
        cin >> x;
        if (canBeSumOfLargeNumbers(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}