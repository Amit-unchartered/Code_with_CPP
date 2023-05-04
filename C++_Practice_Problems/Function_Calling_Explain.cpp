#include <iostream>
using namespace std;

//3. then go to the B function
void B(){
    cout << 5 << endl;
}

//2. then go to the A function
void A(int a){
    cout << 1 << endl;
    B();
    cout << 2 << endl;
}

//1. It will start from main function
int main(){
    int n = 10;
    cout << 3 << endl;
    A(n);
    cout << 4 << endl;
}

//It works on the principle of Call Stack, the functions get exhausted in the reverse order
//of their calling