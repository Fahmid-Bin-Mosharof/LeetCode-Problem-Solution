// Date: 15/03/2025
// 9. Palindrome Number
// C++ Solution
// String Reversal

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string ans = s;
        
        reverse(ans.begin(), ans.end());
        return s == ans;
    }
};

// Time Complexity: O(log n)
// Space Complexity: O(1)