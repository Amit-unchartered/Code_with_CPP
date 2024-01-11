//better solution using hashing
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){
    int hash[n+1]={0};
    for(int i =0; i< n-1; i++){
        hash[arr[i]] = 1;
    }

    for(int i=1; i<=n; i++) {
        if(hash[i] == 0) return i;
    }
}

int main()
{
    int n; cin >> n;
    int arr[n-1];

    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    cout << missingNumber(arr,n) << endl;
    return 0;
}