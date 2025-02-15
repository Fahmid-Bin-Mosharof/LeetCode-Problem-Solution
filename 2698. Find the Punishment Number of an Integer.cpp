// Date: 15/02/2025
// 2698. Find the Punishment Number of an Integer
// C++ Solution
// Backtracking

class Solution {
public:
    int Ans(string s, int x, int sum = 0, int index = 0){
        if(index == s.size()){
            return sum == x;
        }
        int num = 0;
        for(int i=index; i<s.size(); i++){
            num = num * 10 + (s[i]-'0');
            if(Ans(s, x, sum+num, i+1)){
                return 1;
            }
        }
        return 0;
    }
    
    int punishmentNumber(int n) {
        int ans = 0;
        for(int i=1; i<=n; i++){
            int sum = i * i;
            if(Ans(to_string(sum), i)){
                ans += sum;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(logn)