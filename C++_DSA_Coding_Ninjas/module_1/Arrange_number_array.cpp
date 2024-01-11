#include <iostream>
using namespace std;

void arrange(int arr[], int n) {
        for(int i = 0; i < n; i++) {
            if( n % 2 == 0 ) {
                if( i < n/2 ) {
                    arr[i] = (2*i + 1);
                }else{
                    arr[i] = (n - i)*2;
                }
            }else{
                if( i <= n/2 ) {
                    arr[i] = (2*i + 1);
                }else{
                    arr[i] = (n - i)*2;
                }
            }
            cout << arr[i] << " "; 
        }
        
    }

int main(){
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        arrange(arr, n);               
    }
} 