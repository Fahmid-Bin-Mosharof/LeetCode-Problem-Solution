// Date: 11/05/2025
// 1550. Three Consecutive Odds
// C++ Solution
// Greedy Counter Approach

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd = 0;

        for(int i=0; i<arr.size(); i++){
            if(arr[i]%2 == 1){
                odd++;

                if(odd == 3){
                    return true;
                }
            } 
            else{
                odd = 0;
            }
        }
        return false;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)