// Date: 26/02/2025
// 1749. Maximum Absolute Sum of Any Subarray
// C++ Solution

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0;
        int minimum = 0;
        int maximum = 0;

        for(int num : nums){
            sum += num;

            if (sum < minimum){
                minimum = sum;
            }

            if(sum > maximum){
                maximum = sum;
            }
        }
        return abs(maximum - minimum);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
