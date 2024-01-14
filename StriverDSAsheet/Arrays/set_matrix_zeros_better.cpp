#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
    int col[m] = {0};
    int row[n] = {0};

    for(int i =0; i < n; i++) {
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;//o(n*m)
                col[j] = 1;
            }
        }
    }

    for(int i = 0 ; i<n ; i++){
        for(int j = 0; j < m ;j++) {//o(n*m)
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
    //total TC --> o(2*n*m)
    //SC --> o(n)+o(m)
    return matrix;
}

int main()
{
    vector<vector<int>> matrix;
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    for(auto it:matrix){
        for(auto ele:it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}