// Date: 11/05/2025
// 724. Find Pivot Index
// C++ Solution
// Prefix Sum

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>sum(n);
        sum[0] = nums[0];

        for(int i=1; i<n; i++){
            sum[i] = sum[i-1] + nums[i];
        }

        for(int i=0; i<n; i++){
            int left = 0;
            if(i != 0){
                left = sum[i-1];
            }

            int right = sum[n-1] - sum[i];
            if(left == right){
                return i;
            }
        }
        return -1;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)