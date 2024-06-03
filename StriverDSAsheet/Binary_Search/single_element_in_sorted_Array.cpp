#include<bits/stdc++.h>
using namespace std;

//brute force
int singleElementInASortedArray(vector<int> &arr, int k){
    int n = arr.size();
    
    if(n == 1) return arr[0]; //only one element is there

    for(int i=0; i<n; i++){
        if(i == 0){
            if(arr[i] != arr[i+1]){
                return arr[0];
            }
        }
        else if(i == (n-1)){
            if(arr[i] != arr[i-1]){
                return arr[n-1];
            }        
        }else{
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                return arr[i];
            }
        }
    }
}

//optimal
//left half mein elements --> (even, odd)
//if we are in the left half then element is present in right half
//right half mein element --> (odd, even)
//if we are in the right half then element is present in left half
//TC --> O(logn)
int singleElement(vector<int> &arr){
    int n = arr.size();

    if(n == 1) return arr[0];

    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];
    
    //we trimmed down the spaces as it leads to better code readabilty and better time complexity.
    int low = 1; int high = n-2;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            return arr[mid];
        }
        //left half
        if((mid%2==1 && arr[mid-1]==arr[mid]) || (mid%2==0 && arr[mid+1]==arr[mid])){
            low = mid+1;
        }
        //right half
        else{
            high = mid-1;
        }
    }
    return -1; //just for not getting any error
}

int main()
{
    vector<int> arr;
    int n = arr.size();
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    return 0;
}