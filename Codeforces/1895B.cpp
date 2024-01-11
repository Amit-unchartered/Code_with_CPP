#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[2*n];
        for(int i = 0; i < 2*n; i++){
        cin >> arr[i];
        }
        
        int diffx = 0;
        int diffy = 0;
        for(int i = 2; i < 2*n-1; i++){
            diffx = abs(arr[i-2] - arr[i]);
            diffy = abs(arr[i-1] - arr[i+1]);
    }
    cout << diffx+diffy << endl;

    for(int i = 2; i < 2*n-1; i++){
        cout << arr[i-2] << " " << arr[i-1] << endl;
    }
    return 0;
}