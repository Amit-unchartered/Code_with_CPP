#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string a;
    string b;
//  a = s.substr(0,i);
//         b = s.substr(i,s.length());
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
       
        if(s[i] != 0){
            cnt++;
        }else{
            cnt = 0;
        }

        if(cnt == 2){
            a = s.substr(0,i);
            b = s.substr(i,s.length());

            if(b > a && b[i] != 0){
                cout << b << " " << a << endl;
            }else{
                if(i == s.length()-1){
                    cout << "-1" << endl;
                }else{
                    continue;
                }
            }
        }
    }
    if(cnt == s.size()){
        cout << s.substr(0,2) << " " << s.substr(2,s.length()) << endl; 
    }


    return 0;
}