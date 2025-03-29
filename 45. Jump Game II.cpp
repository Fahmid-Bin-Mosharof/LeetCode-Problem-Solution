// Date: 29/03/2025
// 45. Jump Game II
// C++ Solution
// Greedy

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1){
            return 0;
        }
        
        int jumps = 0;
        int current = 0;  
        int next = 0;   
        
        for(int i=0; i<n; i++){
            if(i > current) {
                jumps++;              
                current = next;  
            }
            next = max(next, i+nums[i]);

            if(next >= n-1){
                return jumps + 1;
            }
        }
        return jumps;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)