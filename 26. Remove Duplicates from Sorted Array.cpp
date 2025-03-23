// Date: 23/03/3035
// 26. Remove Duplicates from Sorted Array
// C++ Solution
// Hashing

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }

        unordered_set<int>us;
        int ans = 0;

        for(int i=0; i<nums.size(); i++) {
            if(us.find(nums[i]) == us.end()){
                nums[ans] = nums[i];
                us.insert(nums[i]);
                ans++;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)