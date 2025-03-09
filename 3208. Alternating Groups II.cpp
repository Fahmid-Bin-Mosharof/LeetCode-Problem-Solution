// Date: 09/03/2025
// 3208. Alternating Groups II
// C++ Solution
// Sliding Window

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int ans = 0;
        int x = 0;

        for(int i=0; i<n+k-1; i++){
            if(i > 0 && colors[i%n] == colors[(i-1)%n]){
                x = i;
            }

            if(i-x+1 >= k){
                ans++;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)