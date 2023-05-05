#include <iostream>
using namespace std;

//everything inside class is private by default, everything in C++ which don't has any modifier
//is by default private

//we have implemented a contract which is actually an abstract class having only one rule i.e
//the pure virtual function
class AbstractEmployee {
    virtual void AskForPromotion() = 0; //we have this function virtual to make this function obligatory
};

class Employee:AbstractEmployee {

private:
    
    string Company;
    int Age;

protected:
    string Name;

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
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
        }
    void AskForPromotion(){
        if(Age > 30){
            cout << Name << ", got promoted" << endl;
        }else{
            cout << Name << " , Sorry no promotion for you" << endl;
        }
    }
};

//with this Developer became a child class which means a sub class or derived class and the class Employee
//is called the base class, super class or parent class
//Now Developer has all the properties of the Employee

//Inheritance is bydefault private so to make Employee public we will write public here
class Developer : public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    : Employee(name, company, age)
     {
        FavProgrammingLanguage = favProgrammingLanguage;
     }
    void FixBug() {
        //cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
          cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher : public Employee {
    public:
    string Subject;
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lesson " << endl;
    }
    Teacher(string name, string company, int age, string subject)
    : Employee(name, company, age)
     {
        Subject = subject;
     }
};

int main(){

    //whenever you create object of a class a constructor is invoked
    
    int number;
    Employee employee1 = Employee("Saldina", "AMD", 25);//employee1 is the object of the class Employee
    Employee employee2 = Employee("john", "amazon", 35);//employee2 is also the object of the class Employee

   //knowing who is going to be promoted 
    
    Developer d = Developer("Saldina", "Youtube", 25, "C++");
    d.FixBug();
    d.FixBug();
    d.FixBug();
    d.FixBug();
    //Developer fixes alot of bugs so he/she wants promotion
    d.AskForPromotion();

    Teacher t = Teacher("Jack", "cool school", 35, "History" );
    t.PrepareLesson();
    t.AskForPromotion();

}