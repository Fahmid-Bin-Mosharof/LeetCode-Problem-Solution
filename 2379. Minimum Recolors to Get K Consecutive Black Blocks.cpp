// Date: 08/03/2025
// 2379. Minimum Recolors to Get K Consecutive Black Blocks
// C++ Solution
// Sliding Window

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int m = 0;

        for(int i=0; i<k; i++){
            if(blocks[i] == 'W'){
                m++;
            }
        }

        int ans = m;
        for(int i=k; i<n; i++){
            if(blocks[i] == 'W'){
                m++;
            }
            if(blocks[i-k] == 'W'){
                m--;
            }

            ans = min(ans, m);
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)