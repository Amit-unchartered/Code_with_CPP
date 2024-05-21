#include<bits/stdc++.h>
using namespace std;

//TC --> log(n)
//the array don't have duplicates
//return the index
int findInRotatedArray(vector<int> &arr, int k){
    int n = arr.size();
    int low = 0; int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == k){
            return mid;
        }
        //left sorted
        else if(arr[low] <= arr[mid]){
            if(arr[low]<=k && arr[mid]>=k){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        //right sorted
        else{
            if(k >= arr[mid] && k <= arr[high]){ 
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1; //the element is not present in the array.
}

//the array have duplicates
//for ex = arr[] = {3,3,1,3,3,3,3}
//for worst case we reduce the array by half so WC TC is-->O(n/2)
bool findinrotatedArray(vector<int> &arr, int k){
    int n = arr.size();
        int low = 0; int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == k){
            return true;
        }

        //we will trim down our search space if below condition happens
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++; high--;
            continue;
        }
        //left sorted
        else if(arr[low] <= arr[mid]){
            if(arr[low]<=k && arr[mid]>=k){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        //right sorted
        else{
            if(k >= arr[mid] && k <= arr[high]){ 
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return false; //the element is not present in the array.
}

//minimum in rotated sorted array
int miniInRotated(vector<int> &arr, int k){
    int n = arr.size();
    int low = 0; int high = n-1;
    int ans = 0;

    while(low <= high){
        int ans = INT_MAX;
        int mid = (low+high)/2;
        //if search space is sorted
        //then always arr[low] will always be smaller than arr[high]
        //in that search space, the min element will be arr[low]
        if(arr[low] <= arr[high]){
            ans = min(ans, arr[low]);
            break;
        }

        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++; high--;
            continue;
        }
        //left sorted maana
        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[mid]);
            low = mid+1;
        }
        //right sorted maana
        else{
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int numberOfTimesRotated(vector<int> &arr){
    int n = arr.size();
    int low = 0; int high = n-1;
    int index = -1;

    while(low <= high){
        int ans = INT_MAX;
        int mid = (low+high)/2;
        //if search space is sorted
        //then always arr[low] will always be smaller than arr[high]
        //in that search space, the min element will be arr[low]
        if(arr[low] <= arr[high]){
            if(arr[low] < ans){
                ans = arr[low];
                index = low;
            }
            //ans = min(ans, arr[low]);
            break;
        }

        //considering if the low = mid = high
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++; high--;
            continue;
        }
        //left sorted maana
        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                ans = arr[low];
                index = low;
            }
            //ans = min(ans, arr[mid]);
            low = mid+1;
        }
        //right sorted maana
        else{
            if(arr[mid] < ans){
                ans = arr[mid];
                index = mid;
            }
            //ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return index;
}
int main()
{
    return 0;
}