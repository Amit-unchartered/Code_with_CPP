//KADANE'S ALGORITHM
//this prints one of the subarray with maximum sum
#include<bits/stdc++.h>
using namespace std;

int maximum_subarray_sum(vector<int> &nums){
    int maxi = INT_MIN;
    int sum = 0;
    int n = nums.size();
    int start;
    int ans_start=-1; int ans_end=-1;

    for(int i=0; i < n; i++) {
        if(sum == 0){
            start = i;
        } 
        sum += nums[i];
        
        if(sum > maxi){
            maxi = sum;
            ans_start = start; ans_end = i;
        }
        
        if(sum < 0){
            sum = 0;
        }

        if(maxi < 0){
            maxi = 0;
        }

    }
    for (int i = ans_start; i <= ans_end; i++) {
        cout << nums[i] << " ";
    
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