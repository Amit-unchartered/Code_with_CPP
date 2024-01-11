//better solution
#include<bits/stdc++.h>
using namespace std;

int numAppearOnce(int arr[], int n){
    int maxi = arr[0];
    for(int i=0 ; i<n; i++) {
        maxi = max(maxi, arr[i]);
    }

    int hash[maxi+1] = {0};

    for(int i=0; i<n; i++) {
        hash[arr[i]]++;
    }

    for(int i = 1; i <= maxi; i++){
        if(hash[i] == 1){
            return i ;
        } 
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }
    
    int ans = numAppearOnce(arr, n);
    cout << ans << endl;
    return 0;
}