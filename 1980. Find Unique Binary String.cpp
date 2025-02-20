// Date: 20/02/2025
// 1980. Find Unique Binary String
// C++ Solution

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans = "";
        
        for(int i=0; i<n; i++){
            if(nums[i][i] == '0'){
                ans += '1';
            } 
            else{
                ans += '0';
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)