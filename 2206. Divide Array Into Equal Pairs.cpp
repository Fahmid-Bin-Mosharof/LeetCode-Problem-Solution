// Date: 17/03/2025
// 2206. Divide Array Into Equal Pairs
// C++ Solution
// Sorting

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i+=2){
            if(nums[i] != nums[i+1]){
                return false;
            }
        }
        return true;
    }
};

// Time Complexity: O(nlogn)
// Space Complexity: O(1)