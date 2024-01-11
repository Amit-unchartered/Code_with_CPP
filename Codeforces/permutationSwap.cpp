#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int>& p) {
    for (int i = 1; i < p.size(); i++) {
        if (p[i] < p[i-1]) {
            return false;
        }
    }
    return true;
}

int maximum_k(int n, vector<int>& p) {
    int k = n-1;
    while (k > 0) {
        for (int i = k; i < n; i++) {
            int j = i - k;
            if (p[i] < p[j]) {
                swap(p[i], p[j]);
            }
        }
        if (is_sorted(p)) {
            return k;
        }
        k--;
    }
    return k;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int max_k = maximum_k(n, p);
    cout << max_k << endl;
    }
    return 0;

}
