// Date: 29/04/2025
// 2962. Count Subarrays Where Max Element Appears at Least K Times
// C++ Solution
// Brute Force

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for(int i=0; i<n; i++){
            int maximum = nums[i];
            int count = 0;

            for(int j=i; j<n; j++){
                if(nums[j] > maximum){
                    maximum = nums[j];
                    count = 1;
                } 
                else if(nums[j] == maximum){
                    count++;
                }

                if(count >= k){
                    ans++;
                }
            }
        }
        return ans;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)