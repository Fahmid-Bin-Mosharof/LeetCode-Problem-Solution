// Date: 04/05/2025
// 1128. Number of Equivalent Domino Pairs
// C++ Solution
// Hashing

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count[10][10] = {};
        int ans = 0;

        for(auto& x : dominoes){
            int a = x[0];
            int b = x[1];

            if(a > b){
                swap(a, b);
            } 

            ans += count[a][b];     
            count[a][b]++;
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)