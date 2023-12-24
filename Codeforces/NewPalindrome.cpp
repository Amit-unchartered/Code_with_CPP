#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;


int countDistinct(string str)
{
    unordered_set<char> s;

    for (int i = 0; i < str.size()/2; i++) {
 
        s.insert(str[i]);
    }
 
    return s.size();
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;

        if(str.length() <= 3) {
            cout << "no" << endl;
        }else{
            if(countDistinct(str) > 1){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }

    }

}