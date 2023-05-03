#include <iostream>
using namespace std;

int product(int n){
    int i = 1;
    int ans = 1;
    while(i <= n){
        ans *= i;
        i++;
    }
    return ans;
}
int main(){

    int value = product(10);
    cout << value << endl;

}