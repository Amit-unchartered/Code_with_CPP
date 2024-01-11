#include<bits/stdc++.h>
using namespace std;

bool func(int i, string &str){
    if(i >= str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) return false;

    return func(i+1, str);
}

int main()
{
    string str = "madam";
    
    //printing the output
    cout << func(0,str);
    return 0;
}