// Date: 05/03/2025
// 2579. Count Total Number of Colored Cells
// C++ Solution

class Solution {
public:
    long long coloredCells(int n) {
        if(n == 1){
            return 1;
        }
        return (long long)n * n + (long long)(n-1) * (n-1);
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)