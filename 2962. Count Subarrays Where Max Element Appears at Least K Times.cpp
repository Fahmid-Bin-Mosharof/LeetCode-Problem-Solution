// Date: 29/04/2025
// 2962. Count Subarrays Where Max Element Appears at Least K Times
// C++ Solution
// Sliding Window

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maximum = *max_element(nums.begin(), nums.end());
        long long ans = 0;

        int count = 0;
        int x = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] == maximum){
                count++;
            }

            while(count >= k){
                ans += (n - i);
                
                if(nums[x] == maximum){
                    count--;
                }
                x++;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)