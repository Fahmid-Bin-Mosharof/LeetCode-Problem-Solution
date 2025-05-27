# Date: 27/05/2025
# 2894. Divisible and Non-divisible Sums Difference
# Python Solution
# Brute Froce

class Solution(object):
    def differenceOfSums(self, n, m):
        num1 = 0
        num2 = 0

        for i in range(1, n+1):
            if i%m == 0:
                num2 += i
            else:
                num1 += i
    
        return num1 - num2
        
# Time Complexity: O(n)
# Space Complexity: O(1)
