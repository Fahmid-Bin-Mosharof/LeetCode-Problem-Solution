// Date: 27/04/2025
// 3392. Count Subarrays of Length Three With a Condition
// C++ Solution
// Brute Force

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        
        for(int i=0; i+2<n; i++){
            long long sum = (long long)nums[i] + (long long)nums[i+2];
            if(2 * sum == (long long)nums[i+1]){
                ans++;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)