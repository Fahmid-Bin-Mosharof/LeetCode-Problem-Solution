// Date: 28/05/2025
// 334. Increasing Triplet Subsequence
// C++ Solution
// Prefix and Suffix

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n < 3){
            return 0;
        }

        vector<int>minimum(n);
        vector<int>maximum(n);

        minimum[0] = nums[0];
        for(int i=1; i<n; i++){
            minimum[i] = min(minimum[i-1], nums[i]);
        }

        maximum[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            maximum[i] = max(maximum[i+1], nums[i]);
        }

        for(int i=1; i<n-1; i++){
            if(minimum[i-1] < nums[i] && nums[i] < maximum[i+1]){
                return 1;
            }
        }
        return 0;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)