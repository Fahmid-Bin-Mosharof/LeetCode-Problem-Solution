// Date: 22/03/2025
// 27. Remove Element
// C++ Solution
// Two Pointer

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int ans = 0;

        for(int i=0; i<n; i++){
            if(nums[i] != val){
                nums[ans] = nums[i];
                ans++;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space COmplexity: O(1)