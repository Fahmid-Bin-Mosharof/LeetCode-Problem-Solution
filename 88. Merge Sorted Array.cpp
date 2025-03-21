// Date: 21/03/2025
// 88. Merge Sorted Array
// C++ Solution
// Brute Force 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }

        sort(nums1.begin(), nums1.end());
    }
};

// Time Complexity: O(m+n)
// Space Complexity: O(1)