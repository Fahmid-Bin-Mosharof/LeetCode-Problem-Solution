// Date: 08/05/2025
// 1004. Max Consecutive Ones III
// C++ Solution
// Sliding Window

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int zero = 0;
        int ans = 0;

        while(j < nums.size()){
            if(nums[j] == 0){
                zero++;
            }

            while(zero > k){
                if(nums[i] == 0){
                    zero--;
                }
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)