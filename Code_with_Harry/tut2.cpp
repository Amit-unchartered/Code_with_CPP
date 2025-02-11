#include<bits/stdc++.h>
using namespace std;

//structure --> user defined datatype, for combining different datatypes.
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    //same as struct but provides better memory management
    int rice; //4
    char car; //1
    float pounds; //4

    //it will share memory in the space and will allocate a max of 4 bytes in the ram as we will be using only one variable at the time.
};

int main()
{
    enum Meal{breakfast, lunch, dinner};

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    struct employee amit;
    union money m1;
    m1.rice = 34;
    cout << m1.rice << endl;
    //m1.car = 'ford';
    cout << m1.rice << endl; // now it will store garbage value.
    //ep amit
    amit.eId = 1;
    amit.favChar = 'B';
    amit.salary = 1200000000;

    cout << "The value is: " <<  amit.eId << endl;
    cout << "The value is: " <<  amit.favChar << endl;
    cout << "The value is: " <<  amit.salary << endl;
    return 0;
}