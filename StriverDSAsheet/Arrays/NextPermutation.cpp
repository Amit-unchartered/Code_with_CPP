#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int ind = -1;
    for(int i = n-2; i>=0; i--){
        if(permutation[i] < permutation[i+1]){
            ind = i;
            break;
        }
    } 
    if(ind == -1){
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for(int i = n-1; i > ind; i--){
        if(permutation[i] > permutation[ind]){
            swap(permutation[i], permutation[ind]);
            break;
        }
    }

    reverse(permutation.begin()+ind+1, permutation.end());

    return permutation;
}

int main(){
    int n; cin >> n;
    vector<int>permutation(n);
    for(int i = 0; i < n; i++){
        cin >> permutation[i];
    }

    vector<int> ans = nextPermutation(permutation, n);

    for(auto it:ans) {
        cout << it << " ";
    }
    cout << endl;
}