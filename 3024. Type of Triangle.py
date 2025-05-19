# Date: 19/05/2025
# 3024. Type of Triangle
# Python Solution
# Greedy

class Solution(object):
    def triangleType(self, nums):
        nums.sort()
        num1, num2, num3 = nums

        if num1 + num2 <= num3:
            return "none"

        if num1 == num2 == num3:
            return "equilateral"

        if num1 == num2 or num2 == num3 or num1 == num3:
            return "isosceles"

        return "scalene"
        
# Time Complexity: O(1)
# Space Complexity: O(1)