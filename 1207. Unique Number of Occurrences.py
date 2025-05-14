# Date: 14/05/2025
# 1207. Unique Number of Occurrences
# Pyhton Solution
# Hash Map + Hash Set

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        unique = {}
        for n in arr:
            if n in unique:
                unique[n] += 1
            else:
                unique[n] = 1
        
        occurrences = list(unique.values())
        
        return len(occurrences) == len(set(occurrences))

# Time Complexity: O(n)
# Space Complexity: O(n)