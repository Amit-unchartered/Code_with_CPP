#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	// int m = matrix.size();
    // int n = matrix[0].size();
    // int col[m] = {0}; --> matrix[0][..] -->columns ke liye ek row
    // int row[n] = {0}; --> matrix[..][0] --> rows ke liye ek column

    int col0 = 1;
    for(int i =0; i < n; i++) {
        for(int j = 0; j < m; j++){//o(mxn)
            if(matrix[i][j] == 0){
                //mark the ith row 
				matrix[i][0] = 0;
				//mark the jth column
                if(j!=0){
					matrix[0][j] = 0; //first element ko 0 nhi krna h
				}else{
					col0 = 0;
				}
            }
        }
    }

    for(int i = 1 ; i<n ; i++){//o(mxn)
        for(int j = 1; j < m ;j++) {
            if(matrix[0][j]==0 || matrix[i][0]==0){
                matrix[i][j] = 0;
            }
        }
    }

	if(matrix[0][0]==0){
		for(int j=0; j<m; j++) {
			matrix[0][j] = 0;
		}
	}
	if(col0 == 0) {
		for(int i=0; i<n; i++){
			matrix[i][0] = 0;
		}
	}
    //total TC --> o(2xmxn)
    //total SC --> o(1)
    return matrix;
}

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

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