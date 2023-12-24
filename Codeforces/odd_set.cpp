#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int size = 2*n;
        int arr[size];

        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < size; i++){
         if((arr[i] + arr[i+1]) % 2 == 1){
                size = size - 2;
                i += 1;
            cout << "Yes" << endl;

            }else{
                cout << "No" << endl;
            }
        } 
         
        }
        return 0;

    }
