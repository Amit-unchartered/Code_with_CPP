#include <bits/stdc++.h>
using namespace std;

vector<int> prime_factors(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

vector<int> perfect_array(int n) {
    vector<int> a(n, 1);
    int s = n * n;
    for (int i = 0; i < n; i++) {
        a[i] = n;
    }
    vector<int> primes = prime_factors(n);
    for (int p : primes) {
        a[p-1] = p;
    }
    for (int i = 2; i <= n; i++) {
        if (a[i-1] == 1) {
            vector<int> factors = prime_factors(i);
            int prod = 1;
            for (int f : factors) {
                prod *= f;
            }
            a[i-1] = prod;
        }
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a = perfect_array(n);
        for (int x : a) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}