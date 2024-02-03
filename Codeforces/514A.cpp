#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] >= '5'){
            if(s[0] != '9'){
                s[i] = '0'+ '9' - s[i];
            }else{
                s[i] = '0'+ '9' - s[i];
                s[0] = '9';
            }
        }
    }
cout << s << endl;
}