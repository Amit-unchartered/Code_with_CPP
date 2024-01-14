#include<bits/stdc++.h>
using namespace std;
//TC --> o(nxm) --> since we are traversing each element in the matrix
//SC --> o(nxm) --> for storing the ans
vector<int> spiralMatrix(vector<vector<int>>&matrix, int n, int m) {
    // Write your code here.
    // int n = matrix.size();
    // int m = matrix[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;
    vector<int> ans;

    while(top <= bottom && left <= right){

    for(int i = left; i<=right; i++) {
        ans.push_back(matrix[top][i]);
    }
    top++;
    for(int i=top; i <= bottom; i++){
        ans.push_back(matrix[i][right]);
    }
    right--;
    
    if(top <= bottom){ //if it is single row
        for (int i = right; i >= left; i--) {
          ans.push_back(matrix[bottom][i]);
        }
        bottom--;
    }

    if(left <= right){ //if it is single column
        for (int i = bottom; i >= top; i--) {
          ans.push_back(matrix[i][left]);
        }
        left++;
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

    vector<int> ans = spiralMatrix(matrix, n, m);

    for(auto it:ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}