#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    
    while(t--){
        int n ,f ,k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int x = a[f-1];

        sort(a.begin(), a.end(), greater<int>());

        int z=0;
        for(int i=0;i<k;i++)
        {
            if(a[i]==x)
            {
                z=1;
                break;
            }
        }
        int y=0;
        for(int j=k;j<n;j++)
        {
            if(a[j]==x)
            {
                y=1;
                break;
            }
        }
        if(z==1 && y==1)
            cout<<"MAYBE"<<endl;
        else if(z==1 && y==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}