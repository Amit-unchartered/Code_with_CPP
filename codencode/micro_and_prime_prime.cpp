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

int ar[1000001];
int pp[1000001];

// bool isPrime(int n){
//     if(n==1) return false;

//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

void sieve(){
    int maxn = 1000000;

    for(int i=0;i<=maxn;i++){
        ar[i]=1;
    }
    ar[0] = ar[1] = 0;
    for(lli i=2; i*i<=maxn; i++){
        if(ar[i] == 1){
            for(lli j=i*i; j<=maxn; j++){
                ar[j] = 0;
            }
        }
    }

    int cnt=0;
    for(int i=0;i<=maxn;i++){
        if(ar[i] == 1){
            cnt++;
        }

        if(ar[cnt] == 1){
            pp[i] = 1;
        }else{
            pp[i] = 0;
        }
    }
}

int main(){
    sieve();
    int L,R,t;
    cin >> t;

    while(t--){
        cin >> L >> R;
        int cnt = 0;

        for(int i=L; i<=R; i++) {
            cnt += pp[i];    
        }
        cout << cnt << endl;
    }
}