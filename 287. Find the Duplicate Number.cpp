// Date: 06/03/2025
// 287. Find the Duplicate Number
// C++ Solution
// Sorting

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(1)