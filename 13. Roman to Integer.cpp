// Date: 16/03/2025
// 13. Roman to Integer
// C++ Solution

class Solution {
public:
    int romanToInt(string s) {
         unordered_map<char, int>roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int ans = 0;
        int x = 0;

        for(int i=s.size()-1; i>=0; i--){
            int y = roman[s[i]];
            if(y < x){
                ans -= y;
            } 
            else{
                ans += y;
            }
            x = y;
        }
        return ans;
    }
};

// Time Complexity: O(1)
// Space Complexity: O(n)