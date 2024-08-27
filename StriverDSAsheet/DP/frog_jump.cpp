#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 

int f(int ind, vector<int>& energy, vector<int>& dp){
    if(ind==0) return 0;
     
    if(dp[ind]!=-1) return dp[ind];

    int left = f(ind-1, energy, dp) + abs(energy[ind-1] - energy[ind]);
    

    int right = INT_MAX;
    if(ind > 1){
        right = f(ind-2, energy, dp) + abs(energy[ind-2]-energy[ind]);
    }

    return dp[ind] = min(left, right);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1, -1);
    return f(n-1, heights, dp);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    //vector<int> dp(n+1, -1);
    //return f(n-1, heights, dp); -> memoization
    
    //Tabulation
    vector<int> dp(n,0);
    dp[0]==0;

    for(int i=1; i<n; i++){
        int left = dp[i-1] + abs(heights[i-1]-heights[i]);

        int right = INT_MAX;
        if(i>1){
            right = dp[i-2] + abs(heights[i-2]-heights[i]);
        }

        dp[i] = min(left, right);
    }
    return dp[n-1];
}