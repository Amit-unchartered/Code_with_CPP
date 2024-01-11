#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x;
    
    while(t--){
    int count = 0;
    cin >> x;
    for(int i = 1 ; ; i++){
               

        if(i % 10 == 3 || i % 3 == 0) {
            continue;
        }else{
            count += 1;
        }
        if(count == x) {
            cout << i << endl;
            break;
        }

    }
    }
}