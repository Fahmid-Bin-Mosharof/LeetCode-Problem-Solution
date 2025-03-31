// Date: 31/03/2025
// 28. Find the Index of the First Occurrence in a String
// C++ Solution
// Brute Force

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        for(int i=0; i<=n-m; ++i){
            if(haystack.substr(i, m) == needle){
                return i;
            }
        }
        return -1;
    }
};

// Time Complexity: O(n*m)
// Space Complexity: o(1)