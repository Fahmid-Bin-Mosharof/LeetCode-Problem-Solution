// Date: 27/03/2025
// 122. Best Time to Buy and Sell Stock II
// C++ Soltuion
// DP

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0){
            return 0;
        }

        int x = 0;
        int y = -prices[0];

        for(int i=1; i<n; i++){
            int temp1 = max(x, y+prices[i]);
            int temp2 = max(y, x-prices[i]);
            x = temp1;
            y = temp2;
        }
        return x; 
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)