#include<bits/stdc++.h>
using namespace std;

//rate of interest
class Account{
    public:
    int accno;
    string name;
    static float rateOfInterest;
    Account(int accno, string name) {
        this->accno = accno;
        this->name = name;
    }
    void display(){
        cout << accno << " " << name << " " << rateOfInterest << endl;
    }
};
float Account::rateOfInterest = 6.5;

//counting objects
class Banknum {
    public:
    int accno;
    string name;
    static int count; //by default it starts with 0
    Banknum(int accno, string name){
        this->accno = accno;
        this->name = name;
        count++;
    }
    void display(){
        cout << accno << " " << name << " " << endl;
    }
};

int Banknum::count = 0;

int main()
{
    //rate of interest
    Account a1 = Account(123, "shakul");
    Account a2 = Account(1234, "nakul");
    a1.display();
    a2.display();

    //counting objects
    Banknum b1 = Banknum(201, "Amit");
    Banknum b2 = Banknum(202, "vedant");
    Banknum b3 = Banknum(203, "pramod");
    b1.display();
    b2.display();
    b3.display();
    cout << "Total number of objects are: " << Banknum::count << endl;
    return 0;
}