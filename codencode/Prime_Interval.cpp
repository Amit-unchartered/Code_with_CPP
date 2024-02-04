#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'

bool isPrime(int n){
    if(n == 1) return false;

    for(int i=2; i*i<=n; i++) {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int L, R; cin >> L >> R;

    for(int i=L; i<=R; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}