#include<bits/stdc++.h>
using namespace std;

void two_sum(vector<int> &a, int n, int target){
    for(int i = 0 ; i < n; i++) {
        for(int j = i+1; j < n; j++ ){
            if(i == j) continue;

            if(a[i]+a[j] == target){
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
    cin >> a[i];
    }
    int target; cin >> target;

    two_sum(a,n,target);
    return 0;
}