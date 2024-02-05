/*
You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R.
You have to find the gcd(Greatest Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing).
You are guaranteed that after excluding the part of the array remaining array is non empty.

To answer the query L R
Let GCD of elements 1 to L-1 = g1 -->
GCD of elements R+1 to N = g2
Then, Answer of the query L R = gcd(g1, g2)
gcd(x1, x2, x3, x4, . . . ,xn) = g1
gcd(y1, y2, y3, y4, . . . ,yn) = g2
so gcd(x1, x2, x3, x4, . . . ,xn, y1, y2, y3, y4, . . . ,yn) = gcd(g1,g2)

So, Pre[] = prefix array to store gcd of first i elements at pos i
Pre[i] = gcd(ar[1], ar[2], ar[3], ... ... ar[i])
how to construct pre[i]?
pre[0] = 0; for(int i=1; i<=n; i++){
    pre[i] = gcd(ar[i], pre[i-1]);
}

for suffix
Suff[] = suffix array to store gcd of elements from i to N
Suff[i] = gcd(ar[i], ar[i+1], ar[i+2] ...., ar[N])
How to construct Suff[i]?

Suff[N+1] = 0
for(int i=N; i>=1; i--){
    Suff[i] = gcd(ar[i], Suff[i+1]);
}
*/

#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=1; i<=n; i++)
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
int pre[100001], suff[100001];
int ar[100000];

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main(){
    int t, q, n, l, r;
    cin >> t;

    while(t--){
        cin >> n >> q;

        REP(i, n){
            cin >> ar[i];
        }

        pre[0] = suff[n+1] = 0;

        REP(i, n){
            pre[i] = gcd(ar[i], pre[i-1]);
        }

        for(int i=n; i>=1; i--){
            suff[i] = gcd(ar[i], suff[i+1]);
        }

        while(q--){
            cin >> l >> r;
            cout << gcd(l-1, r+1) << endl;
        }
    }
}