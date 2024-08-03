#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
    
        int count = 0;
    
        for (int a = 1; a <= x; a++) {
            for (int b = 1; b <= x - a; b++) {
                int ab = a * b;
                int max_c = x - a - b;
                if (ab > n || max_c <= 0) {
                    break;
                }
            
                for (int c = 1; c <= max_c; c++) {
                   if (ab + a * c + b * c <= n) {
                        count++;
                    } else {
                        break;
                    }
                }
            }
        }
    
        cout << count << endl;
    }
    
    return 0;
}
