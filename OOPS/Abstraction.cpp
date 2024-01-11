//REAL LIFE EXAMPLE OF ABSTRACTION

//Consider a real-life example of a man driving a car. The man only knows that pressing the
// accelerator will increase the speed of the car or applying brakes will stop the car but he does not
// know how on pressing the accelerator the speed is actually increasing, he does not know about the inner
// mechanism of the car or the implementation of the accelerator, brakes, etc in the car. 
//This is what abstraction is.

//Data abstraction is one of the most essential and important features of object-oriented
//programming in C++. Abstraction means displaying only essential information and hiding the
//details. Data abstraction refers to providing only essential information about the data to the 
//outside world, hiding the background details or implementation.

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

int main(){

    //whenever you create object of a class a constructor is invoked
    
    int number;
    Employee employee1 = Employee("Saldina", "AMD", 25);//employee1 is the object of the class Employee
    Employee employee2 = Employee("john", "amazon", 35);//employee2 is also the object of the class Employee

   //knowing who is going to be promoted 
    employee1.AskForPromotion();
    employee2.AskForPromotion(); 
   

}