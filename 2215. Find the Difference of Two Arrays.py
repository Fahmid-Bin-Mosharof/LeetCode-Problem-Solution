# Date: 12/05/2025
# 2215. Find the Difference of Two Arrays
# Python Solution
# Hash Set

class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        set1 = set(nums1)
        set2 = set(nums2)

        ans1 = set()
        ans2 = set()

        for n in nums1:
            if n not in set2:
                ans1.add(n)

        for n in nums2:
            if n not in set1:
                ans2.add(n)

        return [list(ans1), list(ans2)]

# Time Complexity: O(n+m)
# Space Complexity: O(n+m)