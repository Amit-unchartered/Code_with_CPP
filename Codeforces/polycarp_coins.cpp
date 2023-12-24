 #include <bits/stdc++.h>
 using namespace std;

 int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long c1, c2;

        if(n % 3 == 1){
            c1 = n/3 + 1;
            c2 = n/3;
        }else if(n % 3 == 2){
            c1 = n/3;
            c2 = n/3 + 1;
        }else{
            c1 = n/3;
            c2 = n/3;
        }
    cout << c1 << " " << c2 << endl;
 }
 
 }