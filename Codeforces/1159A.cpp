#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    string s; cin>>s;
    int arr[n];

    for(int i=0; i<n; i++){
        if(s[i] == '-'){
            arr[i] = -1;
        }else{
            arr[i] = 1;
        }
    }
    
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum < 0){
            sum = 0;
        }
        ans = max(ans,sum);
    }
    cout << ans << endl;
    return 0;
}