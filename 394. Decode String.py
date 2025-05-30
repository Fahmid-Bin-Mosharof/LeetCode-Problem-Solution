# Date: 26/05/2025
# 394. Decode String
# Python Solution
# Stack

class Solution(object):
    def decodeString(self, s):
        stack = []

        for i in range(len(s)):
            if s[i] != "]":
                stack.append(s[i])
            else:
                substr = ""
                while stack[-1] != "[":
                    substr = stack.pop() + substr
                stack.pop()

                k = ""
                while stack and stack[-1].isdigit():
                    k = stack.pop() + k
                stack.append(int(k) * substr)

        return"".join(stack)
        
# Time Complexity: O(n)
# Space Complexity: O(n)