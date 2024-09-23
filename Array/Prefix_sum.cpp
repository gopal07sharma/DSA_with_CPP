#include <iostream>
#include <vector>

using namespace std;

// Function to compute prefix sum
vector<int> computePrefixSum(const vector<int>& nums) {
    int n = nums.size();
    vector<int> prefixSum(n + 1, 0); // Initialize prefix sum array with size n+1

    // Compute prefix sum
    for (int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
    }

    return prefixSum;
}

int main() {
    // Sample input array
    vector<int> nums = {1, 2, 3, 4, 5};

    // Compute prefix sum
    vector<int> prefixSum = computePrefixSum(nums);

    // Print prefix sum
    cout << "Prefix Sum: ";
    for (int i = 0; i < prefixSum.size(); ++i) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    return 0;
}