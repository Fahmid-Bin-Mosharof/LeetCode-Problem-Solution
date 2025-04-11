// Date: 11/04/2025
// 2843. Count Symmetric Integers
// C++ Solution
// Brute Force

class Solution {
public:
    bool isSymmetric(int n) {
        string s = to_string(n);
        int len = s.length();
        
        if(len % 2 != 0){
            return 0;
        }

        int mid = len / 2;
        int sum1 = 0;
        int sum2 = 0;

        for(int i=0; i<mid; i++){
            sum1 += s[i] - '0';
        }
        for(int i=mid; i<len; i++){
            sum2 += s[i] - '0';
        }

        return sum1 == sum2;
    }

    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i=low; i<=high; i++){
            if(isSymmetric(i)){
                count++;
            }
        }
        return count;
    }
};

// Time Complexity: O(n*m)
// Space Compleixty: O(m)