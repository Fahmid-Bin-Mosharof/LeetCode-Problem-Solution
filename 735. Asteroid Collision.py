# Date: 21/05/2025
# 735. Asteroid Collision
# Python Solution
# Stack

class Solution(object):
    def asteroidCollision(self, asteroids):
        stack = []

        for i in asteroids:
            while stack and i < 0 < stack[-1]:
                if stack[-1] < -i:
                    stack.pop()
                    continue
                elif stack[-1] == -i:
                    stack.pop()
                break
            else:
                stack.append(i)
                
        return stack

# Time Complexity: O(n)
# Space Complexity: O(n)