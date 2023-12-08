#include<bits/stdc++.h>
using namespace std;

int printS(int ind, int s, int sum, int arr[], int n){
    
    //condition not satisfied
    //strictly done if array contains positives only
    if(s > sum) return 0; //this is done to reduce the time complexity of the alogrith from 2^N

    if(ind == n){
        //condition satisfied
        if(s == sum){
            return 1;
        }else{
            return 0;
        }
    }
    //pick
    s += arr[ind];
    int l = printS(ind+1,s,sum,arr,n);
    
    s -= arr[ind];
    //not pick
    int r = printS(ind+1,s,sum,arr,n);

    return l+r;
}


int main(){
    int n;
    int sum;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> sum;

    cout << printS(0, 0, sum, arr, n);

    return 0;
}