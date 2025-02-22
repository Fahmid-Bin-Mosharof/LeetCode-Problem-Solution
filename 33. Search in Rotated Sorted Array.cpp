// Date: 22/02/2025
// 33. Search in Rotated Sorted Array
// C++ Solution
// Brute Force

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};

// Time complexity: O(n)
// Space Complexity: O(1)