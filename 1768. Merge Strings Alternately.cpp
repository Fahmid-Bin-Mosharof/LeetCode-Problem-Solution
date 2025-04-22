// Date: 22/04/2025
// 1768. Merge Strings Alternately
// C++ Solution
// Two Pointer

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n1 = word1.length();
        int n2 = word2.length();
        int max_length = max(n1, n2);

        for(int i=0; i<max_length; i++){
            if(i < n1){
                ans += word1[i];
            }
            if(i < n2){
                ans += word2[i];
            }
        }
        return ans;
    }
};

// Time Complexity: O(n1+n2)
// Space Compelxity: O(n1+n2)