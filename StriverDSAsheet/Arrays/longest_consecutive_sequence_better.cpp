#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    sort(a.begin(), a.end());
    
    int longest = 1, cnt = 0, last_smaller = INT_MIN;
    for(int i = 0; i < n; i++){
        if((a[i]-1) == last_smaller){
            cnt++;
            last_smaller = a[i];
        }else if(a[i] != last_smaller){
            cnt = 1;
            last_smaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
    cin >> a[i];
    }

    int ans = longestSuccessiveElements(a);
    cout << ans << endl;
    return 0;
}
