//it is optimal solution IFF the array consists of positive, negative and 0.
//TC --> O(n^2)
#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for(int i=0; i < a.size(); i++){
        sum += a[i];
        if(sum == k){
            maxlen = i+1;
        }
        long long rem = sum -k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
    }
    }
    return maxlen;

}

int main()
{
    int n, k; 
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i< a.size(); i++){
        cin >> a[i];
    }

    cout << longestSubarrayWithSumK(a,k) << endl;

    return 0;
}