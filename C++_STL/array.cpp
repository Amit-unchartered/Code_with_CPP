#include <iostream>
#include <array> //for using array STL
using namespace std;

int main(){

    int basic[3] = {1, 2, 3};
    
    //Array STL ki implementation fixed size ke static array se hoti hai
    //that is why we don't use it in CP, STL array is also static
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for(int i = 0; i < size; i++){
        cout << a[i] << endl;
    }

    cout << "element at 2nd Index-->" << a.at(2) << endl;
    cout << "Empty or not-->" << a.empty() << endl;

    cout << "first element-->" << a.front() << endl;

    cout << "last element-->" << a.back() << endl;


}