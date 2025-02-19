// Date: 19/02/2025
// 1415. The k-th Lexicographical String of All Happy Strings of Length n
// C++ Solution
// Bit Manipulation

class Solution {
public:
    string getHappyString(int n, int k) {
        int total = 3 * (1<<(n-1));
        if(k > total){
            return "";
        }

        string ans;
        string x = "abc";
        k--; 

        ans += x[k / (1<<(n-1))];
        k %= (1<<(n-1));

        for(int i=1; i<n; i++){
            int size = (1 << (n - i - 1)); 
            for(char c : x){
                if(c != ans.back()){ 
                    if(k < size){
                        ans += c;
                        break;
                    }
                    k -= size;
                }
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)