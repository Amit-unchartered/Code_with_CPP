#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1e9 + 7;

int countSubarrays(const string& s) {
    int n = s.size();
    vector<int> psum(n + 1);
    unordered_map<int, int> freq;
    freq[0] = 1;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        psum[i + 1] = psum[i] + (s[i] == '1' ? 1 : -1);
        count = (count + freq[psum[i + 1]]) % MOD;
        freq[psum[i + 1]] = (freq[psum[i + 1]] + 1) % MOD;
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << countSubarrays(s) << endl;
    }

    return 0;
}