// Date: 11/02/2025
// 1910. Remove All Occurrences of a Substring
// C++ Solution
// Greedy + Stack Simulation

class Solution {
    public:
        string removeOccurrences(string s, string part) {
            string ans;
            int n = part.size();
    
            for(char c : s){
                ans.push_back(c);
                if(ans.size() >= n && ans.substr(ans.size() - n) == part){
                    ans.erase(ans.size() - n);
                }
            }
            return ans;
        }
    };
    
// Time Complexity: O(m*n)
// Space Complexity: O(m)