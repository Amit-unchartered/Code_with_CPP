//brute force
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k; 
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    int temp[k];
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }

    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }

    for(int i = n-k; i < n; i++){
        arr[i] = temp[i-(n-k)];
    }

    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}