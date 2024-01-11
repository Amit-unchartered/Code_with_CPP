#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> &nums){
    int n = nums.size();
    map<int, int> mpp;

    for(int i = 0 ; i < n; i++) {
        mpp[nums[i]]++;
    }

    for(auto it:mpp) {
        if(it.second > (n/2)){
            return it.first;
        }
    }
}

int main()
{
    int n; cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = majority_element(arr);

    cout << ans << endl;
    return 0;
}