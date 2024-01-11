#include <iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans = ans*i;
        //cout << a << endl; out of scope of a
    }
    return ans;
}

int main(){
    int a;
    //a is defined inside the main function so it is local variable
    //with respect to the main function
    cin >> a;
    int output = fact(a);
    //cout << ans << endl; out of the scope of ans
    cout << output << endl;
}