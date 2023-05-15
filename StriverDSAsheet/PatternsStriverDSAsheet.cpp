#include <iostream>
using namespace std;

void printPattern1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*" <<  " "; 
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << "* "; 
        }
        cout << endl;
    }
}
void pattern3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j << " "; 
        }
        cout << endl;
    }
}
void pattern4(int n) {
    for(int i = 0; i < n; i++) { 
        //spaces
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        //stars
        for(int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        //spaces
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern5(int n) {
    for(int i = 0; i < n; i++) { 
        //spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        //stars
        for(int j = 0; j < 2*n-2*i-1; j++) {
            cout << "*";
        }
        //spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern6(int n) {
    for(int i = 0; i < n; i++) { 
        //spaces
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        //stars
        for(int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        //spaces
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < n; i++) { 
        //spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        //stars
        for(int j = 0; j < 2*n-2*i-1; j++) {
            cout << "*";
        }
        //spaces
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    
}
void pattern7(int n) {
    for(int i = 1; i <= n/2; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n/2 + 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern7a(int n) {
    for(int i = 1; i <= 2*n-1; i++) {
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern8(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            if(i%2 == 0) {
                if(j%2 == 0) {
                    cout << "0 ";
                }else{
                    cout << "1 ";
                }
            }else{
                if(j%2 == 0) {
                    cout << "1 ";
                }else{
                    cout << "0 ";
                }
            }
        }
        cout << endl;
    }
}
void pattern8a(int n) {
    int start = 1;
    for(int i = 0; i < n; i++ ){
        if(i % 2 == 0) start = 1;
        else start = 0;

        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern9(int n) {
    for(int i = 1; i <= n; i++) {
        //numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        //spaces
        for(int j = 1; j <= 2*n-2*i; j++) {
            cout << " ";
        }
        //numbers
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}
void pattern10(int n) {
    int val = 1;
    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= i; j++) {
            cout << val << " ";
            val += 1;
        }
        cout << endl;
    }
}
void pattern11(int n) {
    for(int i = 1; i <= n; i++) {
        for(char ch = 'A'; ch <= 'A' + i - 1; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}
void pattern12(int n) {
    for(int i = 0; i < n; i++) {
        char ch  = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern13(int n) {
    for(int i = 0; i < n; i++) {
        //spaces
        for(int j = 0; j < n-i; j++) {
            cout << " ";
        }
        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for(int j = 0; j < 2*i+1; j++) {
            cout << ch;
            if(j < breakPoint) ch++;
            else ch--;
        }
        //spaces
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern14(int n) {
    for(int i = 1; i <= n; i++) {
        char starChar = 'A'+n-i;
        for(int j = 1; j <= i; j++,starChar++) {
            cout << starChar;
        }
        cout << endl;
    }
}
void pattern15(int n) {
    for(int i = 0; i < n; i++) {
        //stars
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }
        //spaces
        for(int j = 0; j < 2*i; j++) {
            cout << " ";
        } 
        //stars
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++) {
        //stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        //spaces
        for(int j = 0; j < 2*n-2-2*i; j++) {
            cout << " ";
        }
        //stars
        for(int j = 0; j < i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern16(int n) {
   int spaces = 2*n-2;
   for(int i = 1; i <= 2*n-1; i++) {
    int stars = i;
    //stars
    if(i > n) stars = 2*n-i;
    for(int j = 1; j <= stars; j++) {
        cout << "*";
    } 

    //spaces
    for (int j = 1; j <= spaces; j++) {
        cout << " ";
    }

    //stars
    for(int j = 1; j <= stars; j++) {
        cout << "*";
    }
    cout << endl;
    if(i < n) spaces -= 2;
    else spaces += 2;

   }
}
void pattern17(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int n) {
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1; j++) {
            int top = i;
            int left = j;
            int right = (2*n -2) - j;
            int bottom = (2*n - 2) - i;
            cout << (n - min(min(top,bottom), min(left,right)));
        }
        cout << endl;
    }
}

int main() { 
    int n;
    cin >> n;
    //Call different functions to print different patterns
    pattern18(n);

}