#include<bits/stdc++.h>
using namespace std;

void missingInteger(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol;
        
        int j = 0;
        for(int i = 0 ; i <= n; i++) {
            for(int j = 1 ; j <=n; j ++){
            if(nums[j] == (nums[j-1] + 1))
                sol.push_back(nums[j]);
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

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
    cin >> nums[i];
    }

    missingInteger(nums);

}