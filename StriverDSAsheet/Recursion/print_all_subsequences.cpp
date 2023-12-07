#include<bits/stdc++.h>
using namespace std;
void printF(int ind, vector<int> &ss, int arr[], int n){
    if(ind == n){
        for(auto it:ss){
            cout << it << " ";
        }
        if(ss.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    //take or pick particular index into the subsequence
    ss.push_back(arr[ind]);
    printF(ind+1, ss, arr, n);
    ss.pop_back();
    //not pick, or not take condition, this element is not added to your subsequence
    printF(ind+1, ss, arr, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ss;
    printF(0, ss, arr, n);
    return 0;
}