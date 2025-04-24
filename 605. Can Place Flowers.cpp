// Date: 24/05/2025
// 605. Can Place Flowers
// C++ Solution
// Greedy

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0){
            return 1;
        }

        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                n--;

                if(n == 0){
                    return 1;
                }
            }
        }
        return 0;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)