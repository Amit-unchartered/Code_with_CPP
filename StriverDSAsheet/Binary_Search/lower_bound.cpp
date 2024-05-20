#include<bits/stdc++.h>
using namespace std;
//lower bound = smallest index such that arr[ind] >= x;
//if there is no lower bound then return length of DS

// int lb = lower_bound(arr.begin(), arr.end(), n) --> return an iterator pointing to the lower bound index
// to get the lower bound index lb = lower_bound(arr.begin(), arr.end(), n) - arr.begin()

//TC --> O(log2n)
int lowerbound(vector<int>&input, int n, int val)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (input[mid] >= val){
            ans = input[mid];
            high = mid-1;
        }
        else low = mid + 1;
    }
    return ans;
}

// int ub = upper_bound(arr.begin(), arr.end(), n) --> return an iterator pointing to the upper bound index
// to get the upper bound index ub = upper_bound(arr.begin(), arr.end(), n) - arr.begin()

//TC --> O(log2n)
//return index
int upperbound(vector<int>&input, int n, int val){
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (input[mid] > val){
            ans = mid;
            high = mid-1;
        }
        else low = mid + 1;
    }
    return ans;
}

//floor --> largest number in array <= x
//ceil --> smallest number in array >= x --> lower_bound
//return element
int ceil_func(vector<int>& input, int n, int val) {
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (input[mid] >= val) {
            ans = input[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int floor_func(vector<int>& input, int n, int val) {
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (input[mid] <= val) {
            ans = input[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int>& input, int n, int val) {
    int ceil = ceil_func(input, n, val);
    int floor = floor_func(input, n, val);

    return make_pair(floor, ceil);
}


int main()
{


    return 0;
}