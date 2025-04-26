# Date: 26/04/2025
# 151. Reverse Words in a String
# Python Solution
# Split & Reverse

class Solution:
    def reverseWords(self, s: str) -> str:
        return ' '.join(s.split()[::-1])

# Time Complexity: O(n)
# Space Complexity: O(n)