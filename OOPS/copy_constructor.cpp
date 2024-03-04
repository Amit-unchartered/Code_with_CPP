#include<bits/stdc++.h>
using namespace std;

//copy constructor
class A {
    public:
    int x;
    A(int a){   //parameterized constructor
        x = a;
    }
    A(A &i){  //copy constructor
        x = i.x;
    }
};

//shallow copy
/*
In the below case, a programmer has not defined any constructor, therefore, the statement Demo d2 = d1; calls the default constructor defined by the compiler.
 The default constructor creates the exact copy or shallow copy of the existing object.
 Thus, the pointer p of both the objects point to the same memory location.
 Therefore, when the memory of a field is freed,
 the memory of another field is also automatically freed as both the fields point to the same memory location.
 This problem is solved by the user-defined constructor that creates the Deep copy.
*/
class Demo {
    int a; 
    int b;
    int *p;
    public:
    Demo()
    {
        p = new int;
    }
    void setdata(int x, int y, int z){
        a = x;
        b = y;
        *p = z;
    }
    void showdata(){
        cout << "value of a is:" << " " << a << endl;
        cout << "value of b is:" << " " << b << endl;
        cout << "value of *p is:" << " " << *p << endl;
    }
};

//Deep Copy
class Memo {
    public:
    int a;
    int b;
    int *p;

    Memo(){
        p = new int;
    }
    Memo(Memo &d){
        a = d.a;
        b = d.b;
        p = new int; //dynamically allocate memory for a integer variable.
        *p = *(d.p);
    }
    void setdata(int x, int y, int z){
        a = x;
        b = y;
        *p = z;
    }
    void showdata(){
        cout << "value of a is: " << a << endl;
        cout << "value of b is: " << b << endl;
        cout << "value of *p is: " << *p << endl;
    }
};

int main()
{
    //copy constructor
    A a1(20);
    A a2(a1);
    cout << a2.x;

    //shallow copy
    Demo d1;
    d1.setdata(4,5,7);
    Demo d2 = d1;
    d2.showdata();

    //deep copy
    Memo m1;
    m1.setdata(4,5,7);
    Memo m2 = m1;
    m2.showdata();
    return 0;
}

