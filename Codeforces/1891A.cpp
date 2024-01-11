#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n+1];
        for(int i = 1; i <= n; i++){
        cin >> arr[i];
        }
        bool isEven = true;
        for(int i = n; i >= 2; i--){
            if(arr[i-1] > arr[i]){
                if(((i-1)&(i-2)) != 0){
                    isEven =false;
                    break;
                }
            }
        }

        if(isEven){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}