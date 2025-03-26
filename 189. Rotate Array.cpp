// Date: 26/03/2025
// 189. Rotate Array
// C++ Solution

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int>ans(n);

        for(int i=0; i<n; i++){
            ans[(i+k) % n] = nums[i];
        }
        nums = ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)