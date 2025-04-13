// Date: 13/04/2025
// 1922. Count Good Numbers
// C++ Solution
// Binary Exponentiation

class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long a, long long b, long long c){
        long long ans = 1;
        a %= c;

        while(b > 0){
            if(b%2 == 1){
                ans = (ans*a) % c;
            }
            a = (a*a) % c;
            b /= 2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long even = (n+1) / 2;
        long long odd = n / 2;

        long long x = modPow(5, even, MOD);
        long long y = modPow(4, odd, MOD);

        return (x*y) % MOD;
    }
};

// Time Compelxity: O(logn)
// Space Complexity: O(1)