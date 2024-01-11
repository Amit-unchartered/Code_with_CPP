#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--) {
        char a[3][3];
        for(int i =0; i < 3; i++){
            for(int j = 0 ; j < 3; j++) {
                cin >> a[i][j];
            }
        }

        int ca = 0;
        int cb = 0;
        int cc = 0;
        for(int i= 0; i < 3; i++ ){
            for(int j = 0; j < 3; j++){
                if(a[i][j] == 'A'){
                    ca++;
                }else if(a[i][j] == 'B'){
                    cb++;
                }else if(a[i][j] == 'C'){
                    cc++;
                }
            } 
        }

        if(ca==cb){
            cout << 'C' << endl;
        }else if(cb==cc){
            cout << 'A' << endl;
        }else if(ca==cc){
            cout << 'B' << endl;
        }
            
        }
}