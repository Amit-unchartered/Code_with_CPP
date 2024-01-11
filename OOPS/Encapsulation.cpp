//The four pillars of OOPS are:-
//Encapsulation, Abstraction, Inheriatance, Polymorphism

//Encapsulation :- Method of bundeling or tieing together data and methods that poerate that data,
//so they are grouped together in a class. The purpose of doing this to preventing data from anyone
//outside the class to be able to directly access data from outside and to interact with it and modify it.
//We are using this only to stop direct access from outside and nothing else



#include <iostream>
using namespace std;

//everything inside class is private by default, everything in C++ which don't has any modifier
//is by default private

class Employee {
//private: //if we'll not write like this then also it will be private only
private:
    string Name;
    string Company;
    int Age;

public:
void setName(string name) { //setter
    Name = name;
}
string getName() {//getter
return Name;
}
void setCompany(string company) {
    Company = company;
}
string getCompany() {
    return Company;
}
void setAge(int age) {
    if(age >= 18)
    Age = age;
}
int getAge() {
    return Age;
}
    

    //we can define the behaviour of the user also by defining a function here

    void InrtoduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    //The job of the constructor is to construct object of the Employee
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
        }

};

//Private Modifiers :- Whatever is private in your class will not be accessible outside the class
//it is going to be hidden. 

//Public Modifiers :- Whatever is Public in your class will be accessible outside the class as well

//Protected access Modifiers :- It is somewhere between Private and Public access modifiers 
//has certain rules associated to it
int main(){

    //whenever you create object of a class a constructor is invoked
    

    Employee employee1 = Employee("Saldina", "AMD", 25);//employee1 is the object of the class Employee
    // employee1.Name = "Amit";
    // employee1.Company = "Graviton Research Capital LLC";
    // employee1.Age = 23;
     employee1.InrtoduceYourself();

    Employee employee2 = Employee("john", "amazon", 35);//employee2 is also the object of the class Employee
    // employee2.Name = "john";
    // employee2.Company = "amazon";
    // employee2.Age = 35;
    employee2.InrtoduceYourself();
     
    employee1.setAge(40);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old " << endl;

}