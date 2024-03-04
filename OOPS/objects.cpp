#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    string name;
};

//using methods
class Amit{
    public:
    int id;
    string name;

    void insert(int i, string n){
        id = i;
        name = n;
    }

    void display(){
        cout << id << " " << name << endl;
    }
};

//store and display employee information
class Employee{
    public:
    int id;
    string name;
    float salary;

    void insert(int i, string n, float s){
        id = i;
        name = n;
        salary = s;
    }

    void display(){
        cout << id << " " << name << " " << salary << endl;
    }
};

//constructor and destructor
class Car{
    public:
    Car()
    {
        cout << "constructor invoked" << endl;
    }
    ~Car()
    {
        cout << "Destructor invoked" << endl;
    }
};

int main()
{
    Student s1;
    s1.id = 200;
    s1.name = "amit";
    cout << s1.id << endl;
    cout << s1.name << endl;
    
    //class Amit
    Amit s2;
    Amit s3;
    s2.insert(201, "nakul");
    s3.insert(202, "Shakul");
    s2.display();
    s3.display();

    //class Employee
    Employee e1;
    Employee e2;
    e1.insert(400,"pritish",999000);
    e2.insert(410,"avinash",2900);
    e1.display();
    e2.display();
    
    //constructor and destructor
    Car c1;
    Car c2;
    return 0;
}