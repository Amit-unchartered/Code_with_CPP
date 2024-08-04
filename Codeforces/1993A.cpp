#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
         int countA = 0, countB = 0, countC = 0, countD = 0;
        int i = 0;

        while (i < s.size() && (countA < n || countB < n || countC < n || countD < n)) {
            switch (s[i]) {
                case 'A': if (countA < n) countA++; break;
                case 'B': if (countB < n) countB++; break;
                case 'C': if (countC < n) countC++; break;
                case 'D': if (countD < n) countD++; break;
            }
            i++;
        }
        int totalFrequency = countA + countB + countC + countD;
        cout << totalFrequency << endl;
    }
    return 0;
}