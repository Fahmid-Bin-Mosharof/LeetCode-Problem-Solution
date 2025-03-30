// Date: 30/03/2025
// 274. H-Index
// C++ Solution
// Sorting

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int>count(n+1, 0);
        
        for(int c : citations){
            if(c >= n){
                count[n]++;
            } 
            else{
                count[c]++;
            }
        }
        
        int total = 0;
        for(int i=n; i>=0; --i){
            total += count[i];
            if(total >= i){
                return i;
            }
        }
        return 0;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)