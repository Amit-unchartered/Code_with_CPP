#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int l = 0; int r = s.length() - 1;
    while(l < r) {
        if(s[l++] != s[r--]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int ans = -1;

        for(int i = 0; i < n; i++) {
            for(int j = n-1; j > i; j--) {
                string sub = s.substr(i, j-i+1);

                if(!isPalindrome(sub)) {
                    ans = max(ans, (int)sub.length());                    
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}