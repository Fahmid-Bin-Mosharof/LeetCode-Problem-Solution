// Date: 16/04/2025
// 2537. Count the Number of Good Subarrays
// C++ Solution
// Brute Force

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, long long>um;
        long long subarray = 0;
        long long pair = 0;
        int x = 0;

        for(int i=0; i<n; i++){
            pair += um[nums[i]];
            um[nums[i]]++;

            while(pair >= k){
                subarray += (n-i); 
                um[nums[x]]--;
                pair -= um[nums[x]];
                x++;
            }
        }
        return subarray;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)