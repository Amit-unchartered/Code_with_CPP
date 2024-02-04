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

void sieve(){
    int maxN=1000000;
    for(int i=0; i<maxN; i++) {
        ar[i]=-1;
    }

    for(int i=2; i<=maxN; i++) {
        if(ar[i] == -1){
            for(int j=i; j<=maxN; j+=i) {
                ar[j] = i;
            }
        }
    }

}

int main(){
    sieve();
    lli n; cin >> n;

    while(n > 1){
        cout << ar[n] << " ";
        n = n/ar[n];
    }
    cout << endl;
}