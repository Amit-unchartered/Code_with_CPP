#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
    cin >> arr[i];
    }

    int XOR1=0; 
    int XOR2=0;
    for(int i = 0; i<n-1; i++){
        XOR2 = XOR2^arr[i];
        XOR1 = XOR1^(i+1);
    }

    XOR1 = XOR1^n;

    int ans = XOR1^XOR2;
    cout << ans << endl;
    return 0;
}