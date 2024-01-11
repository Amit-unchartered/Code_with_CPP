//optimal solution
#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[], int start, int end){
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//left rotation by k places
void leftrotate(int arr[], int n, int k){
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}

//right rotation by k places
void rightrotate(int arr[], int n, int k){
    reverse(arr, arr+n);
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    leftrotate(arr,n,k);
    rightrotate(arr,n,k);

    for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}