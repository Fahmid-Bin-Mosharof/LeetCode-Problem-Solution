// Date: 02/05/2025
// 1679. Max Number of K-Sum Pairs
// C++ Solution
// Hash Map

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int>um;
        int ans = 0;

        for(int num : nums){
            int x = k - num;

            if(um[x] > 0){
                ans++;
                um[x]--;
            } 
            else{
                um[num]++;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)