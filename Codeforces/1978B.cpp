#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;

        if (a >= b) {
            cout << n * a << endl;
            continue;
        }

        ll k = min(n, b - a);
        ll profit = 0;

        if (k == 1) {
            profit += (b + (n - 1) * a);
        } else {
            profit += (n - k) * a;
            profit += (k * (b + b - k + 1)) / 2;
        }

        cout << profit << endl;
    }
    return 0;
}
