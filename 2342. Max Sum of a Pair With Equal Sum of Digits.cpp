// Date: 12/02/2025
// 2342. Max Sum of a Pair With Equal Sum of Digits
// C++ Solution
// Hashing (Unordered Map)

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int>mp;
        int ans = -1;
    
        for(int num : nums){
            int sum = 0;
            int temp = num;
    
            while(temp){
                sum += temp % 10;
                temp /= 10;
            }
    
            if(mp.count(sum)){
                ans = max(ans, num+mp[sum]);
            }
            mp[sum] = max(mp[sum], num);
        }
        return ans;
    }
};
    
// Time Complexity: O(n)
// Space Complexity: O(1)