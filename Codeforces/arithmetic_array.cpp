#include <iostream>
using namespace std;

void operations(int arr[], int n, int sum){
    
         if(sum >= n){
            cout << (sum - n) << endl;
        }else if (sum < n) {
            cout << 1 << endl;

        }
 
}

int main(){
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];

            sum = sum + arr[i];
        }
       operations(arr, n, sum);
    }
    
}