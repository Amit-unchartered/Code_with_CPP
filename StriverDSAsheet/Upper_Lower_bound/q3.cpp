#include <bits/stdc++.h>
using namespace std;

//find largest number smaller than x in a sorted array. If no number exists then
//print -1 

int main() {
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int x;
    cin >> x;
    int ind = lower_bound(a, a+9, x) - a;
    ind--;

    if(ind >= 0) cout << a[ind];
    else cout << -1;

}