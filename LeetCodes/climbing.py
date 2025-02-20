"""
    This was my second attempt at solving the climbing stairs problem. In the first approach i used dynamic programming to solve the problem. I used a list to store the number of ways to reach each step. I then used the formula f(n) = f(n-1) + f(n-2) to calculate the number of ways to reach the nth step. I then returned the number of ways to reach the nth step. The time complexity of this approach is O(n) and the space complexity is O(n).
    
    Since this first idea consumes a lot of memory, i tried my second approach where i used a bottom-up approach. I used two variables to store the number of ways to reach the previous two steps. I then used a for loop to calculate the number of ways to reach the nth step. I then returned the number of ways to reach the nth step. 
    
    Time Complexity: O(n) and Space Complexity: O(1) (Putted Space Complexity on this one becase i was so proud of my solution :D)
    
    Shoutout to Mister Fibonacci, he is the real MVP.
"""
class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 1:
            return 1
    
        prev1, prev2 = 1, 1

        for i in range(2, n + 1):
            current = prev1 + prev2
            prev2 = prev1
            prev1 = current
        
        return prev1