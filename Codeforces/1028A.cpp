#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
char a[1005][1005];

int main()
{
    int n;int m; 
    cin >> n >>m;
    int x1=0, y1 =0, x2=0, y2=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
            if(a[i][j] == 'B' && x1 == 0){
                x1 = i; y1 = j;
            }
            if(a[i][j] == 'B') x2=i; y2 = j; 
        }
    }

    cout << (x1+x2)/2 << " " << (y1+y2)/2 << endl;
    return 0;
}