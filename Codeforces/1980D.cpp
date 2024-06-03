#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool isNonDecreasing(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            vector<int> temp = a;
            temp.erase(temp.begin() + i);

            vector<int> b(n - 1);
            for (int j = 0; j < n - 1; j++) {
                b[j] = gcd(temp[j], temp[j + 1]);
            }

            if (isNonDecreasing(b)) {
                cout << "YES" << endl;
                break;
            }
        }

        if (isNonDecreasing(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
