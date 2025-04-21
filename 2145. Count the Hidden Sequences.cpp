// Date: 21/04/2025
// 2145. Count the Hidden Sequences
// C++ Solution
// Prefix Sum

class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long sum = 0; 
        long long maximum = lower; 
        long long minimum = upper;

        for(int x : differences){
            sum += x;
            maximum = max(maximum, lower - sum);
            minimum = min(minimum, upper - sum);
        }
        return max(0LL, minimum - maximum + 1);
    }
};

// Time Compelxity: O(n)
// Space Compelxity: O(1)