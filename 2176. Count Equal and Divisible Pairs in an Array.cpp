// Date: 17/04/2025
// 2176. Count Equal and Divisible Pairs in an Array
// C++ Solution
// Brute Force

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] == nums[j] && (i*j) % k == 0){
                    ans++;
                }
            }
        }
        return ans;
    }
};

// Time Complexity: O(n^2)
// Space Complexity O(1)