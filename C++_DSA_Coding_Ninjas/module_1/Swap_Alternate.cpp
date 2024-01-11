#include <iostream>
using namespace std;

void printArray(int input[], int n){
    //cout << "Function : " << sizeof(input) << endl;
    
    cout << "Print : ";
    for(int i = 0; i < n; i++){
        
        cout << input[i] << " ";
    }
     
    cout << endl;
}

void SwapAlternate(int arr[], int n) {
    for(int i = 0;i < n ; i++) {
        swap(arr[i], arr[i+1]);
        i += 1;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        SwapAlternate(arr, n);
        printArray(arr, n);
    }
}