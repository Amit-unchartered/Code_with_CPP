//brute force --> merge sort --> TC => O(NlogN)+O(N),
// SC => O(N) --> for storing the temporary array
#include<bits/stdc++.h>
using namespace std;

vector<int> sort_z_o(vector<int> &nums){
    int n = nums.size();
    int cnt0=0, cnt1=0, cnt2=0;

    for(int i = 0; i < n; i++) {
        if(nums[i] == 0){
            cnt0++;
        }else if(nums[i] == 1){
            cnt1++;
        }else if(nums[i] == 2){
            cnt2++;
        }
    }

    for(int i = 0; i < cnt0; i++) {
        nums[i] = 0;
    }
    for(int i = cnt0; i < cnt0+cnt1; i++) {
        nums[i] = 1;
    }
    for(int i = cnt1+cnt0; i < n; i++) {
        nums[i] = 2;
    }
    return nums;
} 

int main()
{
    int n;cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
    cin >> nums[i];
    }

    vector<int>ans = sort_z_o(nums);

    for(auto it:ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}