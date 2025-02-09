// Date: 08/02/2035
// 2364. Count Number of Bad Pairs
// C++ Solution

class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            long long n = nums.size();
            unordered_map<int, long long>a;
            long long pair = 0;
    
            for(int i=0; i<n; i++){
                long long x = nums[i] - i;
                if(a.count(x)){
                    pair += a[x];
                }
                a[x]++;
            }
            long long ans = (n*(n-1))/2;
            return ans - pair;
        }
    };
    
    // Time Complexity: O(n)
    // Space Complexity: O(n)