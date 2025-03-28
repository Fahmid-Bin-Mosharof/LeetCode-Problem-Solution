// Date: 28/03/2025
// 55. Jump Game
// C++ Solution
// Greedy

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int ans = 0; 

        for(int i=0; i<n; i++){
            if(i > ans){
                return false;
            }

            ans = max(ans, i+nums[i]);

            if(ans >= n-1){
                return true;
            }
        }
        return true;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)