// Date: 13/02/2025
// 3066. Minimum Operations to Exceed Threshold Value II
// C++ Solution
// Greedy + Min Heap

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>>pq(nums.begin(), nums.end()); 
        int ans = 0;
    
        while(pq.size()>1 && pq.top()<k){
            long long x = pq.top(); 
            pq.pop();
    
            long long y = pq.top(); 
            pq.pop();
                
            long long element = x*2+y;
            pq.push(element);
            ans++;
        }
        return ans;
    }
};
    
// Time Complexity: O(nlogn)
// Space Complexity: O(n)