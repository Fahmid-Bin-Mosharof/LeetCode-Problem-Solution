// Date: 12/03/2025
// 2529. Maximum Count of Positive Integer and Negative Integer
// C++ Solution
// Count Positive and Negative Numbers

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, neg = 0;

        for(int num : nums){
            if(num < 0){
                neg++;
            } 
            else if(num > 0){
                pos++;
            }
        }
        return max(neg, pos);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)