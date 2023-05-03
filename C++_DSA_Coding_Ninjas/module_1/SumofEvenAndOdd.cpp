#include <iostream>
using namespace std;

int main(){
    

    int even=0, odd=0, digit;
    long n;
    cin >> n;

while (n>0){
    digit = n%10;
    if(digit%2 == 0){

        even = even + digit;
    }
    else{

        odd = odd + digit;
    }
    n = n/10;
}
 
 cout << even << " " << odd;

    


}