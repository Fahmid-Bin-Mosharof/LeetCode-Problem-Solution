// Date: 01/05/2025
// 443. String Compression
// C++ Solution
// Two Pointer

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n <= 1){
            return n;
        }
        
        int ans = 0; 
        int count = 1; 
        
        for(int i=1; i<=n; i++){
            if(i<n && chars[i] == chars[i-1]){
                count++;
            } 
            else{
                chars[ans++] = chars[i-1];
                
                if(count > 1){
                    string s = to_string(count);

                    for(char c : s){
                        chars[ans++] = c;
                    }
                }
                count = 1;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)