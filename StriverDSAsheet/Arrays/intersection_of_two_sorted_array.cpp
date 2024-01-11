//brute force
#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	 vector<int> ans;
        int vis[n] = {0};

        for(int i=0; i < n; i++){
            for(int j = 0; j< m; j++) {
                if(arr1[i]==arr2[j] && vis[j] == 0){
                    ans.push_back(arr1[i]);
                    vis[j] = 1;
                    break;
                }
                if(arr2[j] > arr1[i]){
                    break;
                }
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