#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
    cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++){
    cin >> b[i];
    }

    int max_a  = *max_element(a.begin(),a.end());
    int max_b = *max_element(b.begin(),b.end());

    cout << max_a << " " << max_b << endl;

    return 0;
}