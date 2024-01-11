#include <bits/stdc++.h>
using namespace std;

//find last occurence of x in a sorted array. If it doesnot exists, print -1

int main(){
    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int x;  
    int ind = upper_bound(a, a+9, x) - a;
    ind--;

    if(ind >= 0 && a[ind] == x) cout << ind;
    else cout << -1;

}