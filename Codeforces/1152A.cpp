#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; int m;
    cin >> n; cin >> m;
    int a[n];
    for(int i = 0; i < n; i++){
    cin >> a[i];
    }
    
    int b[m];
    for(int i = 0; i < m; i++){
    cin >> b[i];
    }

    int cnt = 0;
    for(int i=0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if((a[i]+b[j])%2 == 1){
                i++;
                j++;
                if(j > m-1 || i > n-1){
                break;
            }
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}