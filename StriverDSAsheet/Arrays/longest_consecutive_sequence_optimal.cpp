#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    if(n == 0) return 0;
    int longest = 1;
    
    unordered_set<int> st;

    for(int i = 0; i < n ;i++){
        st.insert(a[i]);//o(n)
    }

    for(auto it:st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
            longest = max(cnt, longest);
        }
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
