// Date: 14/04/2025
// 1534. Count Good Triplets
// C++ Solution
// Brute Force

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int triplets = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int ab = abs(arr[i] - arr[j]);
                if(ab > a){
                    continue;
                }

                for(int k = j+1; k<n; k++){
                    int bc = abs(arr[j] - arr[k]);
                    int ac = abs(arr[i] - arr[k]);

                    if(bc<=b && ac<=c){
                        triplets++;
                    }
                }
            }
        }
        return triplets;
    }
};

// Time Complexity: O(n^3)
// Space Compelxity: O(1)