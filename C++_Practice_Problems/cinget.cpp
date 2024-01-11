#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    int count = 0;

    while(c != '$'){
        count+=1;
        cin >> c;
    }
    cout << count << endl;

    char d;
    d = cin.get();
    
    int ginti = 0;
    while(d != '%'){
        ginti+=1;
        d = cin.get();
    }
    cout << ginti << endl; 
}