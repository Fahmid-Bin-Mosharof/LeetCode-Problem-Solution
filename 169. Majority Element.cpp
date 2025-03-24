// Date: 24/03/2025
// 169. Majority Element
// C++ Solution
// Sorting

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        return nums[n/2];
    }
};

// Time Complexity: O(nlogn)
// Space Complexity: O(1)