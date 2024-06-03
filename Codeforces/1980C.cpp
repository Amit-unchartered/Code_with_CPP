#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(const vector<int>& arr1, const vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();

    int j = 0; // Index for arr1
    for (int i = 0; i < m && j < n; i++) {
        if (arr1[j] == arr2[i]) {
            j++;
        }
    }
    return (j == n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int m;
        cin >> m;

        vector<int> d(m);
        for (int i = 0; i < m; i++) {
            cin >> d[i];
        }

        if (isSubsequence(b, d)) {
            cout << "YES" << endl;
        } else {
            reverse(d.begin(), d.end());
            if (isSubsequence(b, d)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
