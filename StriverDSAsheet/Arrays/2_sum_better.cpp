#include<bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i=0; i<n ; i++) {
        int a = nums[i];
        int more = target-a;

        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {-1,-1};
    }

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
    cin >> a[i];
    }

    int target; cin >> target;

    vector<int>b = twoSum(a,target);

    for(auto it:b){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}