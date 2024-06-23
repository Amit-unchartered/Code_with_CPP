#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int a[n][m];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val = 0;
                int f = 1;
                
                if (i - 1 >= 0) {
                    val = max(val, a[i - 1][j]);
                }
                if (j - 1 >= 0) {
                    val = max(val, a[i][j - 1]);
                }
                if (i + 1 < n) {
                    val = max(val, a[i + 1][j]);
                }
                if (j + 1 < m) {
                    val = max(val, a[i][j + 1]);
                }
                
                if (i - 1 >= 0 && a[i][j] <= a[i - 1][j]) {
                    f = 0;
                }
                if (j - 1 >= 0 && a[i][j] <= a[i][j - 1]) {
                    f = 0;
                }
                if (i + 1 < n && a[i][j] <= a[i + 1][j]) {
                    f = 0;
                }
                if (j + 1 < m && a[i][j] <= a[i][j + 1]) {
                    f = 0;
                }
                if (f == 1) {
                    a[i][j] = val;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
