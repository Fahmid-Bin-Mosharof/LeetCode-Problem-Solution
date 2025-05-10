// Date: 10/05/2025
// 1732. Find the Highest Altitude
// C++ Solution
// Prefix Sum

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0; 
        int highest = 0; 
        
        for(int x : gain){
            altitude += x; 
            highest = max(highest, altitude);
        }
        return highest;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)