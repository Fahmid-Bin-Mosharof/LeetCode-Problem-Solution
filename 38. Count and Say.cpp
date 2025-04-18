// Date: 18/04/2025
// 38. Count and Say
// C++ Solution
// Iterative

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }

        string ans = "1";
        for(int i=2; i<=n; i++){
            queue<char>q;
            for(char c : ans){
                q.push(c);
            }

            string s = "";
            while (!q.empty()){
                char x = q.front();
                int count = 0;
                while(!q.empty() && q.front() == x){
                    count++;
                    q.pop();
                }
                s += to_string(count) + x;
            }
            ans = s;
        }
        return ans;
    }
};

// Time Compelxity: O(2^n)
// Space Complexity: O(2^n)