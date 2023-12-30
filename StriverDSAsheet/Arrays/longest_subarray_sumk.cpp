//optimal solution if numbers in array are 0 or positive
#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left = 0, right = 0;
    long long sum = a[0];
    int maxlen = 0;
    int n = a.size();

    while(right < n){
        while(left<=right && sum > k){
            sum -= a[left];
            left++;
        }

        if(sum == k){
            maxlen = max(maxlen, right-left+1);
        }

        right++;
        if(right < n) sum += a[right];
    }
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return 0;
}