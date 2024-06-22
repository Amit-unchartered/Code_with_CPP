#include <iostream>
#include <vector>
#include <string>
using namespace std;

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
        
        bool all_same = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                all_same = false;
                break;
            }
        }
        
        if (all_same) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string s(n, 'R');
            
            s[1] = 'B';
            
            cout << s << endl;
        }
    }
    return 0;
}
