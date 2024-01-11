//brute force
#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b) {
    // Write your code here
    int n1 = a.size();
    int n2 = b.size();

    vector<int> c;

    int i = 0; int j = 0;
    
    //when the iterators are inside the loop
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(c.back() != a[i] || c.empty()){
                c.push_back(a[i]);
            }
            i++;
        }else {
            if(c.back() != b[j] || c.empty()){
                c.push_back(b[j]);
            }
            j++;
        }
    }

    //when i finishes first
    while(j < n2){
         if(c.back() != b[j] || c.size() == 0){
                c.push_back(b[j]);
            }
        j++;
    }
    
    //when j finishes first
    while(i < n1){
        if(c.back() != a[i] || c.size() == 0){
                c.push_back(a[i]);
            }
        i++;
    }
    //return the vector c
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