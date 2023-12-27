#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.

    //finding first 0
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            j = i;
            break;
        }
    }

    if(j == -1){
        return a;
    }

    //putting the temp vector in arr back
    for(int i = j+1; i < n; i++) {
        if(a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
    cin >> a[i];
    }

    moveZeros(n, a);

    for(auto it:a){
        cout << it << " "; 
    }
    cout << endl;
    return 0;
}