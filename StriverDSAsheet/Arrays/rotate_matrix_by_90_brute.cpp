#include<bits/stdc++.h>
using namespace std;
//brute force
//TC --> o(n2)
//SC --> o(n2)
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix, int n, int m){
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for(int j =0; j < m; j++ ){
            ans[j][n-1-i]=matrix[i][j];
        }
    }
    return ans;
}

int main()
{
    int n,m;
    cin >> n >> m;
    //Create a vector containing "n" 
    //vectors each of size "m".
    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> ans = rotateMatrix(matrix, n, m);

    for(auto it:ans){
        for(auto ele:it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}