// Date: 18/03/2025
// 2401. Longest Nice Subarray
// C++ Solution
// Brute Force

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int len = 0;

        for(int i=0; i<nums.size(); i++){
            int x = 0;
            for(int j=i; j<nums.size(); j++){
                if((x & nums[j]) != 0){
                    break;
                }

                x |= nums[j];
                len = max(len, j-i+1);
            }
        }
        return len;
    }
};

// Time Compelxity: O(n^2)
// Space Complexity: O(1)