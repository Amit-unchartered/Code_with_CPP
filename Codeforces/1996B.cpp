#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    
    while (t--)
    {
        int n, k; cin >> n >> k;

        vector<string> grid(n);

        for(int i=0; i<n; i++){
            cin >> grid[i];
        }

        int r = n/k;

        for(int i=0; i<r; i++){
            for(int j=0; j<r; j++){
                int row = i*k;
                int col = j*k;

                cout << grid[row][col];
            }
            cout << endl;
        }
    }
    
    return 0;
}