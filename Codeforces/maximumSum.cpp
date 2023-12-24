#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--) {
        long long n,k;
        cin >> n >> k;
        int arr[n];
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        sort(arr,arr+n);
        

        for(int i = 1; i < k; i++) {
            int ele1 = arr[i]+arr[i+1];
            int ele2 = arr[n-1];
            if((sum - ele1) > (sum - ele2)){
                sum = sum - ele1;
                i = i + 2;
            }else{
                sum = sum - ele2;
                ele2 = arr[n-1]--;
            }
        }
        cout << sum << endl;
    }
}