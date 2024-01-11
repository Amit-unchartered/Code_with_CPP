#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

unordered_set<string> findUniqueSubstrings(const string& str) {
    unordered_set<string> uniqueSubstrings;
      int count = 0;
    // Iterate through the string, stopping at the second-to-last character
    for (size_t i = 0; i < str.length() - 1; i++) {
        // Get the substring of size two starting at index i
        string substring = str.substr(i, 2);

        // Add the substring to the set
        uniqueSubstrings.insert(substring);
        count = uniqueSubstrings.size();
        
    }

    return count;
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the size of the string

        string inputString;
        cin >> inputString;  // Read the string

        unordered_set<string> uniqueSubstrings = findUniqueSubstrings(inputString);

        // Print the unique substrings
        for (const auto& substring : uniqueSubstrings) {
            cout << substring << endl;
        }
    }

    return 0;
}
