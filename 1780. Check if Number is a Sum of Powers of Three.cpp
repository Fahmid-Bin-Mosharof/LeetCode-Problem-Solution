// Date : 04/03/2025
// 1780. Check if Number is a Sum of Powers of Three
// C++ Solution
// Recursive Approach

class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n == 0){
            return true;
        }
        
        if(n % 3 == 2){
            return false;
        }

        return checkPowersOfThree(n / 3);
    }
};

// Time Complexity: O(log n)
// Space Complexity: O(log n)