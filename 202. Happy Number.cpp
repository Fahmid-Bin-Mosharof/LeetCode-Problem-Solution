// Date: 07/04/2025
// 202. Happy Number
// C++ Solution
// Hash Map

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>us;  
        
        while(n != 1){
            if(us.find(n) != us.end()){
                return false;
            }
            us.insert(n);
            
            int sum = 0;
            while(n > 0){
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};

// Time Complexity: O(log n)
// Space Complexity: O(log n)