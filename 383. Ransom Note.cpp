// Date: 06/04/2025
// 383. Ransom Note
// C++ Solution
// Hash Map

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>count;

        for(char c : magazine){
            count[c]++;
        }

        for(char c : ransomNote){
            if(count[c] == 0){
                return false;
            }
            count[c]--;
        }
        return true;
    }
};

// Time Complexity: O(m+n)
// Space Complexity: O(1)