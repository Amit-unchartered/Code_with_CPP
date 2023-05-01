#include <iostream>
using namespace std;

int main(){
    int i = 1;
    //printing numbers from 1 to 10 except 7
    while (i < 10) {
        if (i == 7) {
            i++;
            continue;
        }
        cout << i << endl;
        i += 1;
    }
}