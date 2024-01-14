#include<bits/stdc++.h>
using namespace std;
//better
//TC --> o(n2/4 +n2/2) --> o(n2)
//SC --> o(1) --> very very good SC
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix, int n, int m){
    //vector<vector<int>> ans(n, vector<int>(m));
    for(int i=0; i<=n-2; i++) {
        for(int j =i+1; j < m; j++){//transpose --> o(n/2xn/2)
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i < n; i++){ //o(n*n/2)
        reverse(matrix[i].begin(), matrix[i].end());
    }
    return matrix;
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