#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
    cin >> a[i];
    }

   int neg = 0;
   int pos = 0;  

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            cout << "0" << endl;
            return;
        }else if(a[i] < 0){
            neg++;
        }else{
            pos++;
        }
    }

    if(neg%2!=0){
        cout << "0" << endl;
    }else{
        cout << "1" << endl;
        cout << "1" << " " << "0" << endl;
    }
    return 0;
}