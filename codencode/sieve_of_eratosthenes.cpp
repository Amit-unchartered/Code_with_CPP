//why we need sieve
// suppose we have q queries
// Q <= million
//input n; n <= 10^6
//o/p : prime or not

//preprocessing time: O(Nlog(logn))
//answers query : O(n)
//Extra Space: O(n)

//TC --> N(log(logn))
// int is_prime[1000001];

// void sieve(){
//     int maxn = 1000000;
//     for(int i=0; i<=maxn; i++){
//         is_prime[i] == 1;
//     }

//     is_prime[0] = is_prime[1] = 0;

//     for(int i=2; i*i<=maxn; i++){
//         if(is_prime){
//             for(int j=i*i; j<=maxn; j+=i){
//                 is_prime[j] = 0;
//             }
//         }
//     }
// }

//spoj
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
vi primes;
bool ar[90000001]; //all the indexes are false during initialisation

void sieve(){
    int maxn = 90000000;
    ar[0] = ar[1] = true;

    for(int i=2; i*i<=maxn; i++){
        if(!ar[i]){
            for(int j=i*i; j<=maxn; j+=i){
                ar[j] = true;
            }
        }
    }
    for(int i=2; i<=maxn; i++){
    if(!ar[i]){
        primes.push_back(i);
    }
}
}


int main(){
    int q, n;
    cin >> q;
    
    sieve();
    while(q--){
        int n; cin >> n;
        cout << primes[n-1] << endl;
    }
}