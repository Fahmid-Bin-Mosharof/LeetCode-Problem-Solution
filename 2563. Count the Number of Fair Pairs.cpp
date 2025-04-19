// Date: 19/04/2025
// 2563. Count the Number of Fair Pairs
// C++ Solution
// Two Pointer

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        long long count = 0;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; ++i){
            int a = lower - nums[i];
            int b = upper - nums[i];

            auto x = lower_bound(nums.begin()+i+1, nums.end(), a);
            auto y = upper_bound(nums.begin()+i+1, nums.end(), b);

            count += y - x;
        }

        return count;
    }
};

// Time Complexity: O(nlogn) 
// Space Compelxity: O(n)