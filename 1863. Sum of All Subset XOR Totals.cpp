// Date: 05/04/2025
// 1863. Sum of All Subset XOR Totals
// C++ Solution
// Bit Manipulation

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int subsets = 1<<n;
    
        for(int i=0; i<subsets; i++){
            int subsetXOR = 0;
            
            for(int j=0; j<n; j++){
                if(i & (1<<j)){
                    subsetXOR ^= nums[j];
                }
            }
            sum += subsetXOR;
        }
        return sum;
    }
};

// Time Complexity: O(n* 2^n)
// Space Complexity: O(1)