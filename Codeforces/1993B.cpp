#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long countEven = 0, countOdd = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) {
                countEven++;
            } else {
                countOdd++;
            }
        }

        int result = min(countEven, countOdd);
        cout << result << endl;
    }

    return 0;
}
