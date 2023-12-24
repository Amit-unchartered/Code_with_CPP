#include <bits/stdc++.h>
#include <string>
using namespace std;



int main(){

    int t;
    cin >> t;
    
    while(t--){
    string s;
    string ch = "codeforces";
    cin >> s;
    int n = s.length();

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] != ch[i]) {
            count += 1;
        }
    }
    cout << count << endl;
    }

}