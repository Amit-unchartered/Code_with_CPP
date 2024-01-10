//variety 1 --> equal number of positives and negatives
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange_elements(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n,0);
    int pos = 0;
    int neg = 1;
    for(int i = 0; i < n ;i++){
        if(arr[i] > 0){
            ans[pos] = arr[i];
            pos+=2;
        }else{
            ans[neg] = arr[i];
            neg+=2;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }

    for(auto it:rearrange_elements(arr)) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}