// Date: 03/05/2025
// 643. Maximum Average Subarray I
// C++ Solution
// Sliding Window

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        double sum = 0;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        double average = sum;
        for(int i=k; i<n; i++){
            sum += nums[i] - nums[i - k];
            average = max(average, sum);
        }
        return average / k;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)