// Date: 30/04/2025
// 1295. Find Numbers with Even Number of Digits
// C++ Solution

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for(int num : nums){
            int x = 0;
            while(num > 0){
                num /= 10;
                x++;
            }
            if(x%2 == 0){
                ans++;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)