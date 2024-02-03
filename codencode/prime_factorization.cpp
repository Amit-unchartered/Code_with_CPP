//given number n, find its prime factorization
//n = 100 // factorization --> (2^2)*(5^2)
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

int main(){
    
}

//brute force --> worst case O(N)
void primeFact(int n){
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            int cnt=0;
            while(n%i == 0){ 
                cnt++; n=n/i;
            }
            cout << i << "^" << cnt << endl;
        }
    }
}

//optimized approach
//if n is a composite number there is at least 1 prime divisor of N below sqrt(N)
//TC --> O(sqrt(n))
void primeFact(int n){
    for(int i=2; i*i<=n; i++){ //there will be no prime divisor below sqrt(n) for prime numbers, but for composite numbers it will exist
        if(n%i == 0){
            int cnt=0;
            while(n%i == 0){ 
                cnt++; n=n/i;
            }
            cout << i << "^" << cnt << endl;
        }
    }
    if(n>1){
        cout << n << "^" << endl;
    }
}