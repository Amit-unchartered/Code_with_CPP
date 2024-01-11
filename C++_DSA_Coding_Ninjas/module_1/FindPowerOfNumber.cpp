// #include <iostream>
// #include <math.h>
// using namespace std;


// int main(){

//     int x,n;
//     cin >> x >> n;

//     cout << pow(x,n) << endl;

// }

#include <iostream>
using namespace std;

int main(){

  int pow=1, x ,n ;
  cin >> x >> n;

  while(n>0){

    pow *= x;
    n--;
 }
 cout << pow;

}