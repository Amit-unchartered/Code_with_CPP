//optimal solution--> TC --> O(N)
#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int slargest = INT_MIN;
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] > smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    int slargest = secondLargest(arr,n);
    int sSmallest = secondSmallest(arr,n);
    cout << slargest << " " << sSmallest << endl;
    return 0;
}