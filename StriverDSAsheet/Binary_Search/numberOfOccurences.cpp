#include <bits/stdc++.h> 

int firstOccurence(vector<int>&input, int n, int val)
{
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (input[mid] == val){
            first = mid; high = mid-1;
        }else if(input[mid] > val){
            high = mid-1;
        }
        else low = mid + 1;
    }
    return first;
}

int lastOccurence(vector<int>&input, int n, int val){
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (input[mid] == val){
            last = mid; low = mid+1;
        }else if(input[mid] > val){
            high = mid-1;
        }
        else low = mid + 1;
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = firstOccurence(arr, n, k);

    if(first == -1) return{-1,-1};
    else return{first, lastOccurence(arr, n, k)};
}