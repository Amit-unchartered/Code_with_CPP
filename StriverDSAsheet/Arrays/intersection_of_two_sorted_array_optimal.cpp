//brute force
#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	 vector<int> ans;
     int i = 0;
     int j = 0;

     while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }else if(arr1[i] > arr2[j]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
     }
        return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++){
    cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++){
    cin >> arr2[i];
    }
    
    vector<int> result = findArrayIntersection(arr1,n,arr2,m);

    for(auto it:result){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}