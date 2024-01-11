#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;
        string s;
        string t;
        cin >> s;
        cin >> t;
        
        bool s1 = true;
        bool t1 = true;

        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]) s1 == false;
        }

        for(int i = 0; i < m-1; i++){
            if(t[i] == t[i+1]) t1 == false;
        }
        
        if(s1 == false){
            if(t1 == false){
                cout << "NO" << endl;
            }else{
                int a = 0;
                for(int i = 0; i < n-1; i++){
                    if(s[i] == s[i+1]){
                        if((s[i] == t[0]) || (s[i] == t[m-1])){
                            a++;
                            break;
                        }
                    }
                }
                if(a == 0){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
        }else{
            cout << "YES" << endl;
        }
    }  
    return 0;
}