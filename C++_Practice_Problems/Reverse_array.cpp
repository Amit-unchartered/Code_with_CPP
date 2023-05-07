#include <iostream>
using namespace std;

void printArray(int input[], int n){
    //cout << "Function : " << sizeof(input) << endl;
    
    cout << "Print : ";
    for(int i = 0; i < n; i++){
        
        cout << input[i] << " ";
    }
     cout << "<--Inside PrintArray Function" ;
    cout << endl;
}

void reverse(int arr[], int n) {
    int i = 0, j = (n - 1);
    for(i = 0; i < j; i++, j--) {
        swap(arr[i], arr[j]);
        
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout << "<--Inside Reverse Function";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    reverse(arr, n);
    printArray(arr, n);
}