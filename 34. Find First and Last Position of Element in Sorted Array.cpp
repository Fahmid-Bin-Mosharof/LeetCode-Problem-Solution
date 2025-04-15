// Date: 15/04/2025
// 34. Find First and Last Position of Element in Sorted Array
// C++ Solution
// Binary Search

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans = {-1, -1};
        if(nums.empty()){
            return ans;
        }
        
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right-left) / 2;

            if(nums[mid] == target){
                ans[0] = mid;
                right = mid - 1; 
            } 
            else if(nums[mid] < target){
                left = mid + 1;
            } 
            else{
                right = mid - 1;
            }
        }

        left = 0,
        right = nums.size() - 1;
        
        while(left <= right){
            int mid = left + (right-left) / 2;

            if(nums[mid] == target){
                ans[1] = mid;
                left = mid + 1;
            } 
            else if(nums[mid] < target){
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }
        
        if(ans[0] > ans[1]){
            return {-1, -1};
        }
        return ans;
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)