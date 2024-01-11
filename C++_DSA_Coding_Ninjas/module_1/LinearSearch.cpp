#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int x){
    for(int i = 0; i < n; i++) {
        
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}


int main(){
    int t;
    cin >> t;

    while(t--){
    int n,x;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
   
    
    int ans = LinearSearch(arr, n, x);
    cout << ans << endl;
    }
}