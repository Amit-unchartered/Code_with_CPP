#include<bits/stdc++.h>
using namespace std;

//pointer -> data type which hold address of other datatypes

int main()
{
    int a=3;
    int* b = &a;

    cout << "Address of a: " << b << endl;
    cout << "Address of a: " << &a << endl;
    //& --> (address of) operator

    //* --> (value at) dereference operator
    cout << "value at address b is: " << *b << endl;


    int** c = &b;
    cout << "Address of b is: " << &b << endl;
    cout << "Address of b is: " << c << endl;
    cout << "Value at address c is: " << *c << endl;
    cout << "value_at(value_at(c)) is: " << **c << endl;  

    return 0;

    //in array, array name is address of first block, NOT &arrayName
    // address(new) = address(current) + i*size_of_datatype.
}