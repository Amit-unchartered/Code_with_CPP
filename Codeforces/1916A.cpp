#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int b[n];

    for(int i = 0; i < n; i++) {
        cin >> b[i]; 
    }

    int pro = 0;
    for(int i = 0; i < n; i++) {
         pro *= b[i];
    }
    
    if(pro > 2023){
        cout << "NO" << endl;
    }else if(2023%pro != 0){
        cout << "NO" << endl;
    }else if(pro == 289){
        cout << "7";
        for(int i = 0; i <k-1;i++){
            cout << "1" << endl;
        }
    }else if(pro == 2023){
        cout << "YES" << endl;
        if(k == 1){
            cout << "7" << " " << "17" << " "  << "17";
        }
        for(int i = 0; i <k-1;i++){
            cout << "1" << endl;
        }
    }


    return 0;
}
