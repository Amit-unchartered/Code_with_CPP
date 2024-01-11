//brute force
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1 = a.size();
    int n2 = b.size();

    set<int>st;
    for(int i=0; i<n1; i++){
      st.insert(a[i]);
    }   

    for(int i=0; i<n2; i++){
      st.insert(b[i]);
    }

    vector<int> c(st.size());

    int j=0;
    for(auto it:st){
      c[j++] = it;
    }

    return c;   
    }

int main()
{
    int n1; cin >> n1;
    vector<int> a(n1); 
    for(int i= 0; i < n1; i++){
        cin >> a[i];
    } 
    
    int n2; cin >> n2;
    vector<int> b(n2); 
    for(int i= 0; i < n2; i++){
        cin >> b[i];
    } 

    sortedArray(a,b);

    for(auto it:sortedArray(a,b)){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}