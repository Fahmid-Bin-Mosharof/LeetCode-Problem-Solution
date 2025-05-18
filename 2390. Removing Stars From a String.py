# Date: 18/05/2025
# 2390. Removing Stars From a String
# Python Solution
# Stack

class Solution(object):
    def removeStars(self, s):
        stack = []

        for x in s:
            if x == '*':
                stack.pop()
            else:
                stack.append(x)

        return ''.join(stack)
        
# Time Complexity: O(n)
# Space Complexity: O(n)