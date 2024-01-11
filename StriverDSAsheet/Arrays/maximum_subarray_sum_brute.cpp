#include<bits/stdc++.h>
using namespace std;

int maximum_subarray_sum(vector<int> arr){
    int maxi = INT_MIN;
    int n = arr.size();

    for(int i =0 ; i<n; i++) {
        for(int j = 0; j < n; j++) {
            int sum =0;
            for(int k = i; k < j; k++){
                sum += arr[k];
                maxi = max(maxi, sum);
            }
        }
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    int ans = maximum_subarray_sum(arr);

    cout << ans << endl;
    return 0;
}