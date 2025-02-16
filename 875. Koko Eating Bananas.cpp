// Date: 16/02/2025
// 875. Koko Eating Bananas
// C++ Solution
// Binary Search

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while(l < r){
            int m = l + (r-l) / 2;
            long long time = 0;
            
            for(int x : piles){
                time += (x+m-1) / m; 
            }

            if(time <= h){
                r = m;  
            } 
            else{
                l = m + 1;
            }
        }
        return l;
    }
};

// Time Complexity: O(nlogmax(piles))
// Space Complexity: O(n)