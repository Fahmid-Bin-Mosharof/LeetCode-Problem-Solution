// Date: 02/04/2025
// 228. Summary Ranges
// C++ Solution
// Two Pointer

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int n = nums.size();
        
        if(n == 0){
            return ans;
        }
        
        int j = 0;  
        for(int i=1; i<=n; i++){
            if(i==n || nums[i] != nums[i-1]+1){
                if(j == i-1){
                    ans.push_back(to_string(nums[j]));
                }
                else{
                    ans.push_back(to_string(nums[j]) + "->" + to_string(nums[i-1]));
                }
                j = i;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)