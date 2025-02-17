# Date: 17/02/2025
# 1079. Letter Tile Possibilities
# Python Solution
# Backtracking

class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        freq = Counter(tiles)  

        def ans():
            total = 0
            for ch in freq:
                if freq[ch] > 0:
                    freq[ch] -= 1
                    total += 1 + ans()  
                    freq[ch] += 1  
            return total
        return ans()

# Time Complexity: O(n*n)
# Space Complexity: O(n)