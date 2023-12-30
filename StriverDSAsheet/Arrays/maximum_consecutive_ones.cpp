//optimal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    int cnt = 0, maxm = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1){
            cnt++;
            maxm = max(cnt, maxm);
        }else{
            cnt = 0;
        }
    }

    cout << maxm << endl;
    
    return 0;
}