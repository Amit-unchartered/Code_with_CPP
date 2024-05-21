#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

string decode(const string& encoded) {
    set<char> chars(encoded.begin(), encoded.end());
    string r(chars.begin(), chars.end());

    map<char, char> decode_map;
    int n = r.size();
    for (int i = 0; i < n; ++i) {
        decode_map[r[i]] = r[n - i - 1];
    }

    string original;
    for (char ch : encoded) {
        original += decode_map[ch];
    }

    return original;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int len;
        cin >> len;
        string encoded;
        cin >> encoded;
        cout << decode(encoded) << endl;
    }

    return 0;
}
