// Date: 25/03/2025
// 80. Remove Duplicates from Sorted Array II
// C++ Soltuion
// Two Pointer

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2){
            return nums.size();
        }

        int ans = 1;  
        int count = 1; 

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                count++;
            } 
            else{
                count = 1;
            }
            if(count <= 2){
                nums[ans++] = nums[i];
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)