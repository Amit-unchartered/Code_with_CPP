//KADANE'S ALGORITHM
#include<bits/stdc++.h>
using namespace std;

int maximum_subarray_sum(vector<int> &nums){
    int maxi = INT_MIN;
    int sum = 0;
    int n = nums.size();

    for(int i=0; i < n; i++) {
        sum += nums[i];
        
        maxi = max(maxi, sum);
        
        if(sum < 0){
            sum = 0;
        }

        if(maxi < 0){
            maxi = 0;
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