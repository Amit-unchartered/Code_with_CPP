#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int F[1101];
map<ll,ll>M;
int main()
{
int n; cin >> n;

F[1]=F[2]=1;
M[1]=1;

for(int i=3; i < n; i++){
    F[i] = F[i-1] + F[i-2];
    M[F[i]] = 1; 
}

for(int i = 1; i <= n; i++){
    if(M[i]){
        cout << "O" ;
    }else cout << "o";
}

cout << endl;
    return 0;
}