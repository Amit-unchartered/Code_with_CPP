#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int> ans; //SC --> O(N) --> for storing
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--) {
        if(a[i] > maxi){
            ans.push_back(a[i]);
        }
        maxi = max(a[i],maxi); // O(N)
    }
    
    sort(ans.begin(), ans.end());//O(NlogN)
    return ans; //total TC --> O(N)+O(NlogN)
}

int main(){}