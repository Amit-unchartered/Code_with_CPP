#include <iostream>
#include <vector>
using namespace std;

int minSubarrayWithSameBitwiseOr(vector<int>& nums) {
    int n = nums.size();
    int maxLength = 1; // Initialize with the minimum length required
    int currentLength = 1; // Length of the current segment

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; ++i) {
        if (nums[i] == nums[i - 1]) {
            // If current element is same as the previous one, increment current length
            currentLength++;
        } else {
            // If current element is different, update maxLength if necessary and reset current length
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    // Update maxLength in case the last segment is the longest
    maxLength = max(maxLength, currentLength);

    return maxLength;
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << minSubarrayWithSameBitwiseOr(nums) << endl;
    }
    return 0;
}
