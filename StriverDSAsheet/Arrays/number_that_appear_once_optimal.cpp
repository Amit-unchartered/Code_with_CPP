//using xor
#include<bits/stdc++.h>
using namespace std;

int numAppearOnce(vector<int> &a, int n){
    int XOR = 0;
    for(int i=0; i<n; i++) {
        XOR = XOR^a[i];
    }
    return XOR;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    int ans = numAppearOnce(arr, n);
    cout << ans << endl;
    return 0;
}