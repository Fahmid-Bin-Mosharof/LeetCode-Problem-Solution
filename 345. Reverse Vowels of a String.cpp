// Date: 25/04/2025
// 345. Reverse Vowels of a String
// C++ Solution
// Two Pointer

class Solution {
public:
    bool vowel(char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int n = s.size() - 1;
        int m = 0;

        while(m < n){
            while(m < n && !vowel(s[m])){
                m++;
            }
    
            while(m < n && !vowel(s[n])){
                n--;
            }

            swap(s[m], s[n]);
            m++;
            n--;
        }
        return s;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)