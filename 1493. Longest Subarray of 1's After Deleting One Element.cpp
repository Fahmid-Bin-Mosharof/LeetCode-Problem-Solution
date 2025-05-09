// Date: 09/05/2025
// 1493. Longest Subarray of 1's After Deleting One Element
// C++ Solution
// Sliding Window

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        int x = 0;
        int y = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                x++;
            }
            while(x > 1){
                if(nums[y] == 0){
                    x--;
                }
                y++;
            }
            ans = max(ans, i-y);
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)