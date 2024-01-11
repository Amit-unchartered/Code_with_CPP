#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
    if(i < 1){
        cout << sum << endl;
        return;
    }
    sum = sum + i;
    func(i-1,sum); 
}

int main()
{
    int n;
    cin >> n;

    func(n,0);
}