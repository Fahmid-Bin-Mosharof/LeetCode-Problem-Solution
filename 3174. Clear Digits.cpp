// Date: 10/02/2025
// 3174. Clear Digits
// C++ Solution
// Stack

class Solution {
    public:
        string clearDigits(string s) {
            string ans;
    
            for(char c : s){
                if(isdigit(c) && !ans.empty()){
                    ans.pop_back();
                } 
                else{
                    ans.push_back(c);
                }
            }
            return ans;
        }
    };
    
// Time Complexity: O(n)
// Space Complexity: O(n)