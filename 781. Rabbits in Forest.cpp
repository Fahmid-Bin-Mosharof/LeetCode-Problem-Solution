// Date: 20/05/2025
// 781. Rabbits in Forest
// C++ Solution
// Greedy

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int>count;
        int ans = 0;

        for(int i : answers){
            if(count[i] == 0){
                ans += i + 1;
                count[i] = i;
            } 
            else{
                count[i]--;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)