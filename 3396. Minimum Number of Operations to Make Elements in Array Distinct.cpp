// Date: 08/04/2025
// 3396. Minimum Number of Operations to Make Elements in Array Distinct
// C++ Solution
// Greedy Algorithm

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0; i<=n; i += 3){
            unordered_set<int>us;
            int distinct = 1;

            for(int j=i; j<n; j++){
                if (us.count(nums[j])){
                    distinct = 0;
                    break;
                }
                us.insert(nums[j]);
            }

            if(distinct){
                return i / 3;
            }
        }
        return (n+2) / 3; 
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(n)