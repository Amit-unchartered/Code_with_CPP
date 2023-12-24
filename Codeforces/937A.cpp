#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    set<int> st;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    if(arr[i] != 0){
    st.insert(arr[i]);
    }
    }

    cout << st.size() << endl;

    return 0;
}