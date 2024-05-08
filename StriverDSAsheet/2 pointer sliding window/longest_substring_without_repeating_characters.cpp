#include<bits/stdc++.h>
using namespace std;

//TC --> O(N*N)
//SC --> O(256)

int main()
{
    string s; cin >> s;
    int n = s.length();
    int maxlength = 0;
    vector<int> mpp(256, 0);
    int left =0; int right = 0;
    while(right < n){
        if(mpp[s[right]] != 0){
            left = max(mpp[right]+1, left);
        }
            mpp[s[right]] = right;
            maxlength = max(maxlength, right-left+1);
            right++;
    }


    return maxlength;
}