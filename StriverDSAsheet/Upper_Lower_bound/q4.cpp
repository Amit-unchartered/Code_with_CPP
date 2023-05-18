#include <bits/stdc++.h>
using namespace std;

//find the smallest number greater than x in a sorted array. If no number exists print -1

int main() {
     int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int x;
    cin >> x;

    int ind = upper_bound(a, a+9, x) - a;

    if(ind < 9) cout << a[ind];
    else cout << -1;
}