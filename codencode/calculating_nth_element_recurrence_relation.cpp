//calculating nth element of a recurrence relation in O(logn)
//recurrence relation --> A recurrence relation is an equation that defines a sequence based on a rule that gives the next term as a function of previous terms
//fibonnacci series --> F(n) = F(n-1)+F(n-2) if n>2
//F(1)=1, F(2)=1

//1,1,2,3,5,8,13,21,34...


/*
for fibonacci series
[F1 F2][0 1]^(n-1) = [Fn Fn+1]
       [1 1]
*/     

/*
f(n) = 2f(n-1)+3f(n-2)
F(1)=0, F(2)=1
if it depends on previous k terms then it would be of size k*k

[f1 f2]*[a b] = [f2 f3]  --> on solving a=0, b=3, c=1, d=2
        [c d]
*/

#include<bits/stdc++.h>
using namespace std;
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
const int mod = 1e9+7;
lli ar[3];
lli I[3][3], T[3][3];

void mul(lli A[3][3], lli B[3][3], int dim){
    lli res[dim+1][dim+1];

    for(int i=1; i<=dim; i++){
        for(int j=1; j<=dim; j++){
            res[i][j]=0;
            for(int k=1; k<=dim; k++){
                //res[i][j] += A[i][k]*B[k][j];
                lli x = (A[i][k]*B[k][j])%mod; //since fibonacci numbers grow exponentially
                res[i][j] = (res[i][j]+x)%mod;
            }
        } 
    }

    REP(i, dim){
        REP(j, dim){
            A[i][j] = res[i][j];
        }
    }
}

lli getfib(int n){
    if(n <= 2)return ar[n];

    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;

    n = n-1;

    while(n){
        if(n%2){
            mul(I,T,2); n--; //ultimately the answer is stored in I only
        }else{
            mul(T,T,2); n/=2;
        } 
    }

    lli Fn = (ar[1]*I[1][1]+ar[2]*I[2][1])%mod;
    return Fn;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> ar[1] >> ar[2] >> n, n++;
        cout << getfib(n) << endl;
    }
}