#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            cnt++;
        }else{
            cnt--;
        }
    }
    if(cnt != 0){
        cout <<  '1' << endl;
        cout << s << endl;
    }else{
        cout << '2' << endl;
        cout << s.substr(0,s.size()-1) << " " << s[s.size()-1];
    }
    return 0;
}