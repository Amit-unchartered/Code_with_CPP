#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
    int arr[4];
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    if((min(arr[0], arr[1]) > max(arr[2], arr[3])) || (max(arr[0], arr[1]) < min(arr[2], arr[3]))){
            cout << "no" << endl;
        }else{
            cout << "yes" << endl;
        }
    }
}