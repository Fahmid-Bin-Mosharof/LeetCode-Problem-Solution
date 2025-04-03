// Date: 03/04/2025
// 392. Is Subsequence
// C++ Solution
// Two Pointer

class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto x = t.begin();

        for(char c : s){
            x = find(x, t.end(), c); 

            if(x == t.end()){
                 return false; 
            }
            x++;
        }
        return true;
    }
};

// Time Complexity: O(n*m)
// Space Complexity: O(1)