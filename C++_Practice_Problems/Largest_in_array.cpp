#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int input[100];

    for(int i = 0; i < n; i++){
        cin >> input[i]; // i is the index of the current element
    }

    int max = INT_MIN; //for putting minimum number use INT_MIN
    for(int i = 0; i < n; i++){
        
        if(input[i] > max){
            max = input[i];
        }
    }
    cout << max << endl;
}