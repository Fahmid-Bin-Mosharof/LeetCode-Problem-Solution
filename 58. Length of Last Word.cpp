// Date: 01/04/2025
// 58. Length of Last Word
// C++ Solution
// Two Pointer

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;    
        int i = s.length()-1;
        
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        
        while(i >= 0 && s[i] != ' '){
            length++;
            i--;
        }
        return length;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)