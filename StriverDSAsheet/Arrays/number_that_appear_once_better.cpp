//using map DS --> better solution
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int numAppearOnce(vector<int> &a, int n){
    map<ll,int> mpp;

    for(int i=0; i<n; i++){
        mpp[a[i]]++;
    }

    for(auto it:mpp){
        if(it.second == 1){
            return it.first;
        }
    }
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