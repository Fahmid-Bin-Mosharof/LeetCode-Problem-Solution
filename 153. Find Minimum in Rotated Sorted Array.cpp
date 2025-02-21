// Date: 21/02/2025
// 153. Find Minimum in Rotated Sorted Array
// C++ Solution
// Brute Force

class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(), nums.end());
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)