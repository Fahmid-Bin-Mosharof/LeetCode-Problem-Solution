// Date: 19/03/2025
// 14. Longest Common Prefix
// C++ Solution
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        
        string s = strs[0];
        for(int i=1; i<strs.size(); i++){
            while(strs[i].find(s) != 0) {
                s = s.substr(0, s.length() - 1);
                if(s.empty()){
                    return "";
                }
            }
        }
        return s;
    }
};


// Time Complexity: O(n*m)
// Space Complexity: O(1)