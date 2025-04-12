// Date: 12/04/2025
// 35. Search Insert Position
// C++ Solution
// Binary Search

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right){
            int mid = left + (right-left) / 2;
            
            if(nums[mid] == target){
                return mid;
            } 
            else if(nums[mid] < target){
                left = mid + 1; 
            } 
            else{
                right = mid - 1;
            }
        }
        return left;
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)