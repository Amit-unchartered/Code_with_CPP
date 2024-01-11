#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n % 2 ==0)
        {
            int num = 2;
            for(int i = 1; i<=n; i++)
            {
                cout << num << " ";
                num += 2;
            }
            cout << endl;
        }
        else
        {
            for(int i=1; i<=n; i++)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}