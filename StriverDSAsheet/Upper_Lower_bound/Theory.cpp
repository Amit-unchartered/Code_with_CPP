#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {1, 4, 5, 8, 9};

    bool res = binary_search(a, a+5, 3);

    cout << res << endl;

    bool fkc = binary_search(a, a+5, 4);

    cout << fkc << endl;
    
    //lower bound --> if the element exists then returns an iterator pointing to
    //that element, otherwise returns an iterator pointing to element just greater
    //than it.
    int b[] = {1, 4, 5, 6, 9, 9};

    int ind = lower_bound(b, b+6, 4) - b;
    int pak = lower_bound(b, b+6, 7)  - b;
    int aus = lower_bound(b, b+6 ,10) - b;

    cout << ind << " " << pak << " " << aus << " " << endl;

    //for vector
    vector<int> c;
    int x;
    int nz = lower_bound(c.begin(), c.end(), x) - c.begin();

    //UPPER BOUND
    //it returns the iterator that is just greater than the number to be found

    int d[] = {1, 4, 5, 6, 9, 9};

    int abc = upper_bound(d, d+6, 4) - d;
    int def = upper_bound(d, d+6, 7) - d;
    int pqr = upper_bound(d, d+6, 10) - d;

    cout << abc << " " << def << " " << pqr << " " << endl;

    //for vector the expression of upper bound is same as expression for lower bound
    //LB and UB have time complexities of O(logn)
}