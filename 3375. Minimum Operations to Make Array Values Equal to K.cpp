// Date: 09/04/2025
// 3375. Minimum Operations to Make Array Values Equal to K
// C++ Solution
// Greddy using Set

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int>s;
        for(int x : nums){
            if(x < k){
                return -1;
            }
            if(x > k){
                s.insert(x);
            }
        }

        int ans = 0;
        while(!s.empty()){
            int maximum = *s.rbegin();
            ans++;
            s.erase(maximum);
        }
        return ans;
    }
};

// Time Complexity: O(nlogn)
// Space Complexity: O(n)