// Date: 18/02/2025
// 2375. Construct Smallest Number From DI String
// C++ Solution

class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.length();
        string ans = "";
        
        for(int i=1; i<=n+1; i++){
            ans += to_string(i);
        }
        
        for(int i=0; i<n; i++){
            if(pattern[i] == 'D'){
                int j = i;
                while(j<n && pattern[j] == 'D'){
                    j++;
                }
                reverse(ans.begin()+i, ans.begin()+j+1);
                i = j;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)