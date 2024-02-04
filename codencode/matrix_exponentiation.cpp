//given a matrix A, and an integer N, calculate A^N

//Naive Approach --> TC => O(M^3*N)
//optimal approach --> TC => O(M^3*logN)

#include<bits/stdc++.h>
#define REP(i,n) for (int i=1; i<=n; i++)
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define N 101
const int mod = 1e9+7;

using namespace std;
lli ar[N][N], I[N][N];

//THIS IS SIMPLE MATRIX MULTIPLICATION
void mul(lli A[][N], lli B[][N], int dim){
    lli res[dim+1][dim+1];

    REP(i,dim){
        REP(j,dim){
            res[i][j] = 0;
            REP(k, dim){
                lli x = (A[i][k]*B[k][j])%mod;
                res[i][j] = (res[i][j]+x)%mod;
            }
        }
    }

    REP(i,dim){
        REP(j,dim){
            A[i][j] = res[i][j];
        }
    }
}

//IMP --> when we pass a 2d matrix to a function then we need to specify the number of columns otherwise it will throw error.
void power(lli A[][N], int dim, int n){
    REP(i, dim) REP(j, dim){
        if(i == j){
            I[i][j] = 1;
        }else{
            I[i][j] = 0;
        }
    }

    // REP(i, n){
    //     mul(I,A,dim);
    // }

    while(n){
        if(n%2){
            mul(I,A,dim); n--;
        }else{
            mul(A,A,dim); n /= 2;
        }
    }

    REP(i, dim) REP(j, dim){
        A[i][j] = I[i][j];
    }
}

void printMat(lli A[][N], int dim){
    REP(i, dim){
        REP(j, dim){
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    int t, dim, n;
    cin >> t;

    while(t--){
        cin >> dim >> n;
        REP(i,dim) REP(j,dim) cin >> ar[i][j];

        power(ar, dim, n);
        printMat(ar, dim);
    }
}