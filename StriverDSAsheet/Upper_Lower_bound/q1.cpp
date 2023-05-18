#include <iostream>
using namespace std;

//find the first occurence of x in a sorted array. if it doesnot exists return -1

int main() {
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int x;  
    int ind = lower_bound(a, a+9, x) - a;

    if(ind != 9 && a[ind] == x) cout << ind;
    else cout << -1;
}