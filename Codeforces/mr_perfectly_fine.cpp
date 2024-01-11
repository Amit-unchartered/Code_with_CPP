#include <bits/stdc++.h>
#include <climits>
using namespace std;

bool fun(int n, int m) {
    if (n == m) return true; 
    else if (n % 3 != 0) {return false;}
    else{
        return fun(n/3 , m) || fun(2*n/3, m) ;
    }
}


int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;

while(t--){
 int n, m;
 cin >> n >> m;
  
  fun(n,m);
  if(fun(n,m) == true){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
}
}
}