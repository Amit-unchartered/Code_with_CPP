#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int>v){
    int n = v.size();

    for(int i=0; i<n; i++) {
        int cnt = 0;
        for(int j=0; j<n; j++) {
            if(v[j] == v[i]){
                cnt++;
            }
            //if(cnt>n/2) return cnt; //returns the count of the majority element
        }
        if(cnt > (n/2)) 
        return v[i];
    }
    return -1;
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

    // for(auto it:arr){
    //     cout << it << " ";
    // }
    // cout << endl;
    return 0;
}