#include <iostream>
#include <vector>
#include <map>
using namespace std;

long long countBeautifulPairs(const vector<int>& a) {
    map<vector<int>, long long> cnt;
    long long ans = 0;
    int n = a.size();
    for (int i = 1; i < n - 1; ++i) {
        vector<int> cur = {a[i - 1], a[i], a[i + 1]};
        ans += cnt[cur];
        ++cnt[cur];
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << countBeautifulPairs(a) << endl;
    }

    return 0;
}
