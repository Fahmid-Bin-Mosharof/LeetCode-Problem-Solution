// Date: 05/05/2025
// 1456. Maximum Number of Vowels in a Substring of Given Length
// C++ Solution
// Sliding Window

class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int n = s.length();
        int count = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(isVowel(s[i])){
                count++;
            }
            if(i >= k && isVowel(s[i - k])){
                count--;
            }

            ans = max(ans, count);
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)