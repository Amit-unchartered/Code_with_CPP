#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int nowLength = 0, maxLength = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                nowLength++;
            }else{
                maxLength = max(maxLength, nowLength);
                nowLength = 0;
            }
        }
        maxLength = max(maxLength, nowLength);
        cout << maxLength << endl;
    }
}