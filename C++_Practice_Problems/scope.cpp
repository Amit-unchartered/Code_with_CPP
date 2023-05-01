#include <iostream>
using namespace std;

int main(){
    int k = 1;
    while (k < 1000)
    {
        int k2 = 1002;
        cout << k2 << endl;
        k++;
    }
    
    //k2 is asked for output out of the scope of the variable
    //so again error will be thrown
    cout << k2 << endl;
    
    //any variable will be available in the parentheses just surrounding it.

    int i = 10;
    cout << i << endl;
    if(i == 10){
        int j = 12;
        cout << j << endl;
    }else{
        int j = 110;
        cout << j << endl;
    }

    // Now the line below will fetch an error because cout
    // j is asked outside the scope where j is defined
    // cout << j << endl;

    //In two different scopes we can delcare two variables with the same name
    if(i == 10){
        int i = 23;
        cout << i << endl;
    }
    cout << i << endl;


    //for loop

    int k = 0;//scope for this k is from start till end
    for(; k < 10; k++){
        cout << k << endl;
    }
    cout << k << endl;

}