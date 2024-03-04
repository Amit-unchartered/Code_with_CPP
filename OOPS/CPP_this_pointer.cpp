#include<bits/stdc++.h>
using namespace std;

class Employee {
    public:
    int id;
    string name;
    float salary;
    Employee(int id, string name, float salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display(){
        cout << id << " " << name << " " << salary << endl;
    }
};

int main()
{
    Employee e1 = Employee(201, "shakul", 12500);
    Employee e2 = Employee(202, "nakul", 25000);
    e1.display();
    e2.display();
    return 0;
}