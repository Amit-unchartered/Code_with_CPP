#include<bits/stdc++.h>
using namespace std;

void missingInteger(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol;
        
        for(int i = 1 ; i <= n; i++) {
            if(nums[i] == (nums[i+1] + 1)){
                sol.push_back(nums[i-1]);
            }
        }
        
        // int sum = 0;
        // for(auto it:sol){
        //     sum += it;
        // }
        
        // int maxi = *max(nums.begin(), nums.end());
        // int ans = maxi+1;
        
        // int cnt = 0;
        // for(int i = 0; i < n ; i++) {
        //     if(sum == nums[i]){
        //         return ans;
        //     }else{
        //         cnt++;
        //     }
        // }
        // if(cnt == n){
        //     return sum;
        // }

        for(auto it:sol){
            cout << it << " ";
        }
        cout << endl;
    }
//myy code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }


    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }
    return 0;
}