#include <iostream>
using namespace std;

//it is a void function, it don't need to return anything back
void print_1_to_n(int n) {
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

//function for multiplying two numbers
int multiply(int a, int b) {
    return a * b;
}

int main(){

//we just need to call the function, we can't store it in some other variable as
//the function doesn't returns any value

print_1_to_n(25);

int ans = multiply(2, 3);
cout << ans << endl;
}