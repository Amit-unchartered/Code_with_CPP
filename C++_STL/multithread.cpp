#include<bits/stdc++.h>
#include<thread>
using namespace std;

void foo(int z){
    for(int i=0; i<z; i++){
        cout << "Thread using function pointer as callable" << endl;
    }
}

class thread_obj {
    public:
        void operator()(int x)
        {
            for(int i=0; i<x; i++){
                cout << "Thread using function object as callable" << endl;
            }
        }
};

class base {
    public:
        //non-static member function
        void foo(){
            cout << "Thread using nonstatic member function as callable" << endl;
        }

        //static member function
        static void foo1()
        {
            cout << "Thread using static member function as callable" << endl;
        }
};

int main()
{
    cout << "Threads 1 and 2 and 3 are operating independently" << endl;
    
    //This thread is launched by using function pointer as callable.
    thread th1(foo,3);

    //This thread is launched by using function object as callable.
    thread th2(thread_obj(), 3);

    //Define lambda expression
    auto f = [](int x) {
        for(int i=0; i<x; i++){
            cout << "Thread using lamdba expression as callable\n";
        }
    };

    //This thread is launched by using lamdba expression as callable
    thread th3(f,3);

    //object of base class
    Base b;

    thread th4(&Base::foo, &b);

    thread th5(&Base::foo1);
    
    //wait for thread 1 to finish
    th1.join();
    //wait for thread 2 to finish
    th2.join();
    //wait for thread 3 to finish
    th3.join();
    //wait for thread 4 to finish
    th4.join();
    //wait for thread 5 to finish
    th5.join();


    return 0;
}
